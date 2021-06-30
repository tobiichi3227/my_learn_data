#ifndef NEWCORE_H_INCLUDED
#define NEWCORE_H_INCLUDED
#include <iostream>
#include <string>
#include <Windows.h>
#include <map>
#include <vector>
using namespace std;

class NewCore
{
public:
    NewCore();
    NewCore(string&);
    map<char, int> KeyMap =
    {
        {'.',110},{'0',48},{'1',49},{'2',50},{'3',51},{'4',52},{'5',53},{'6',54},{'7',55},{'8',56},{'9',57},{'a',65},{'b',66},{'c',67},{'d',68},{'e',69},{'f',70},{'g',71},{'h',72},{'i',73},{'j',74},{'k',75},{'l',76},{'m',77},{'n',78},{'o',79},{'p',80},{'q',81},{'r',82},{'s',83},{'t',84},{'u',85},{'v',86},{'w',87},{'x',88},{'y',89},{'z',90},{'-', 45},{',',44},{'/',111},{';',59}
    };
    void down(int);
    void up(int);
    void press(int);
    const void input_vec(string&);
    //void input_shift(int);
    //vector<int> keynums(const string&);
    ~NewCore();
};
#endif //NEWCORE_H_INCLUDED
