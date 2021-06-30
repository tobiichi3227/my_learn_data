#include "newcore.h"
using namespace std;

NewCore::NewCore() {}
NewCore::NewCore(string& word)
{
    this->input_vec(word);
}
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
    this->up(vk);
    this->down(vk);
}
const void NewCore::input_vec(string& words)
{
    vector<char> vec_str(words.begin(), words.end());
    vector<int> vk;
    copy(vec_str.begin(), vec_str.end(), vec_str.begin());
	for (int i = 0; i < vec_str.size(); i++)
    {
        char temp = words[i];
        vk.push_back(KeyMap[temp]);
    }
    for (int i = 0; i < vk.size(); i++)
    {
        this->press(vk[i]);
    }
}
NewCore::~NewCore() {}
