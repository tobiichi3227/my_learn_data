#include "AudioPlayer.h"
#include <cmath>

namespace nv {
	AudioPlayer::AudioPlayer(WORD nChannels_, DWORD nSamplesPerSec_)
		: nChannels(nChannels_), nSamplesPerSec(nSamplesPerSec_), pwfx(nullptr), flags(0)
	{
		Init();
	}

	HRESULT AudioPlayer::Start() {
		return pAudioClient->Start();
	}

	HRESULT AudioPlayer::Stop() {
		return pAudioClient->Stop();
	}

	BYTE* AudioPlayer::GetBuffer(UINT32 wantFrames) {
		BYTE* buffer;
		pRenderClient->GetBuffer(wantFrames, &buffer);
		return buffer;
	}

	HRESULT AudioPlayer::ReleaseBuffer(UINT32 writtenFrames) {
		return pRenderClient->ReleaseBuffer(writtenFrames, flags);
	}

	HRESULT AudioPlayer::WriteFLTP(float* left, float* right, UINT32 sampleCount) {
		UINT32 padding;
		pAudioClient->GetCurrentPadding(&padding);
		if ((maxSampleCount - padding) < sampleCount) { // 音频写入太快了，超出缓冲区，我们直接清空现有缓冲区，保证时间对的上
			pAudioClient->Stop();
			pAudioClient->Reset();
			pAudioClient->Start();
		}

		if (left && right) {
			auto pData = GetBuffer(sampleCount);
			for (int i = 0; i < sampleCount; i++) {
				int p = i * 2;
				((float*)pData)[p] = left[i];
				((float*)pData)[p + 1] = right[i];
			}
		}
		else if (left) {
			auto pData = GetBuffer(sampleCount);
			for (int i = 0; i < sampleCount; i++) {
				int p = i * 2;
				((float*)pData)[p] = left[i];
				((float*)pData)[p + 1] = left[i];
			}
		}


		return ReleaseBuffer(sampleCount);
	}

	HRESULT AudioPlayer::WriteS16(short* data, UINT32 sampleCount)
	{
		UINT32 padding;
		pAudioClient->GetCurrentPadding(&padding);
		if ((maxSampleCount - padding) < sampleCount) { // 音频写入太快了，超出缓冲区，我们直接清空现有缓冲区，保证时间对的上
			pAudioClient->Stop();
			pAudioClient->Reset();
			pAudioClient->Start();
		}

		if (data) {
			auto pData = GetBuffer(sampleCount);
			for (size_t i = 0; i < sampleCount * this->nChannels; i++) {
				float s = (float)data[i];
				if (s > 0) {
					s = s / SHRT_MAX;
				}
				else if (s < 0) {
					s = -s / SHRT_MIN;
				}
				((float*)pData)[i] = s;
			}
			return ReleaseBuffer(sampleCount);
		}

		return -1;
	}

	HRESULT AudioPlayer::PlaySinWave(int nb_samples) {
		auto m_time = 0.0;
		auto m_deltaTime = 1.0 / nb_samples;

		auto pData = GetBuffer(nb_samples);

		for (int sample = 0; sample < nb_samples; ++sample) {
			float value = 0.05 * std::sin(5000 * m_time);
			int p = sample * nChannels;
			((float*)pData)[p] = value;
			((float*)pData)[p + 1] = value;
			m_time += m_deltaTime;
		}

		return ReleaseBuffer(nb_samples);
	}

	HRESULT AudioPlayer::SetVolume(float v) {
		return pSimpleAudioVolume->SetMasterVolume(v, NULL);
	}

	HRESULT AudioPlayer::Init() {
		constexpr auto REFTIMES_PER_SEC = 10000000; // 1s的缓冲区

		HRESULT hr;

		hr = pEnumerator.CoCreateInstance(__uuidof(MMDeviceEnumerator));

		hr = pEnumerator->GetDefaultAudioEndpoint(
			eRender, eConsole, &pDevice);

		hr = pDevice->Activate(
			__uuidof(IAudioClient), CLSCTX_ALL,
			NULL, (void**)&pAudioClient);

		CComPtr<IAudioSessionManager> pAudioSessionManager;
		hr = pDevice->Activate(
			__uuidof(IAudioSessionManager), CLSCTX_INPROC_SERVER,
			NULL, (void**)&pAudioSessionManager
		);

		CComPtr<IAudioSessionControl> pAudioSession;
		hr = pAudioSessionManager->GetAudioSessionControl(
			&GUID_NULL,
			FALSE,
			&pAudioSession
		);

		hr = pAudioSessionManager->GetSimpleAudioVolume(
			&GUID_NULL,
			0,
			&pSimpleAudioVolume
		);

		hr = pAudioClient->GetMixFormat(&pwfx);

		// 我们可以设置与音频设备不同的采样率
		pwfx->nSamplesPerSec = nSamplesPerSec;
		// 固定双声道
		pwfx->nAvgBytesPerSec = pwfx->nSamplesPerSec * nChannels * (pwfx->wBitsPerSample / 8);
		// 必须使用这种格式
		pwfx->wFormatTag = WAVE_FORMAT_EXTENSIBLE;

		hr = pAudioClient->Initialize(
			AUDCLNT_SHAREMODE_SHARED,
			AUDCLNT_STREAMFLAGS_AUTOCONVERTPCM | AUDCLNT_STREAMFLAGS_SRC_DEFAULT_QUALITY, // 这里的flag告诉系统需要重采样
			REFTIMES_PER_SEC,
			0,
			pwfx,
			NULL);

		hr = pAudioClient->GetService(
			__uuidof(IAudioRenderClient),
			(void**)&pRenderClient);

		maxSampleCount = pwfx->nSamplesPerSec;

		return hr;
	}
}
