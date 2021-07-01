#include "newcore.h"
using namespace std;

NewCore::NewCore() : m_string(""), m_char(NULL) {}
NewCore::NewCore(string& words) : m_string(words) { input_words(m_string); }
NewCore::NewCore(char& word) : m_char(word) { input_words(m_char); }
void NewCore::down(int vk)
{
    keybd_event(vk, 0, 0, 0);
}
void NewCore::up(int vk)
{
    keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
}
void NewCore::press(int vk)
{
    up(vk);
    down(vk);
}
const void NewCore::input_words(string& words)
{
    vector<int> vk(words.size());
    for (int i = 0; i < words.size(); i++) { vk[i] = KeyMap[words[i]]; }
    for (int i = 0; i < vk.size(); i++) { press(vk[i]); }
}
const void NewCore::input_words(char& word) { press(KeyMap[word]); }
NewCore::~NewCore() {}
