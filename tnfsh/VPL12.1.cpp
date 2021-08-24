#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
#include <map>
//#include <stack>
//#include <deque>
//#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>
//#include <cstdio>
//#include <cstdlib>
//#include <cctype> isdigit,isupper,islower

using namespace std;

//user function 開始

//user function 結尾

int main()
{
    //std::ios::sync_with_stdio(false); //加速cout用
    //std::cin.tie(0); //加速cin用
    //換行建議使用"\n"
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator

    //主要程序碼
    int n{}, number{}, score{};
    map<int, int, greater<int>> temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number >> score;
        temp[score] = number;
    }
    auto it = temp.begin();
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << it->second << " " << it->first << "\n";
        ++it;
        if (it == temp.end())
            break;
    }
    //程式碼結尾
    return 0;
}
