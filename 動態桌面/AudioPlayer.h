#pragma once
#include <Windows.h>
#include <atlcomcli.h>
#include <mmdeviceapi.h>
#include <Audioclient.h>
#include <audiopolicy.h>

namespace nv {
	class AudioPlayer {
	public:
		AudioPlayer(WORD nChannels_, DWORD nSamplesPerSec_);

		HRESULT Start();

		HRESULT Stop();

		BYTE* GetBuffer(UINT32 wantFrames);

		HRESULT ReleaseBuffer(UINT32 writtenFrames);

		// FLTP 格式左右声道分开，我们把他们合并到一起，“左右左右左右”这样
		HRESULT WriteFLTP(float* left, float* right, UINT32 sampleCount);

		HRESULT WriteS16(short* data, UINT32 sampleCount);

		// 播放正弦波，仅仅只是用来测试你的喇叭会不会响
		HRESULT PlaySinWave(int nb_samples);

		// 设置音量
		HRESULT SetVolume(float v);
	private:
		WORD nChannels;
		DWORD nSamplesPerSec;
		int maxSampleCount; // 缓冲区大小（样本数）

		WAVEFORMATEX* pwfx;
		CComPtr<IMMDeviceEnumerator> pEnumerator;
		CComPtr<IMMDevice> pDevice;
		CComPtr<IAudioClient> pAudioClient;
		CComPtr<IAudioRenderClient> pRenderClient;
		CComPtr<ISimpleAudioVolume> pSimpleAudioVolume;

		DWORD flags = 0;

		HRESULT Init();

	};
}
