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
    map<double,int,greater<double>> score;
    int x{}, y{}, number{}, sum{};
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        cin >> number;
        int temp{};
        for (int i = 0; i < y; i++)
        {
            cin >> temp;
            if(i == 0 or i == 1)
            {
                temp *= 3.87;
                sum += temp;
            }
            else
                sum += temp;
        }
        score[sum] = number;
    }
    auto it = score.begin();
    for (int i = 1; i <= 3; i++)
    {
        cout << i << ": " << it->second << endl;
        ++it;
    }
    //程式碼結尾
    return 0;
}
