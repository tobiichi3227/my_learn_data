#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
//#include <map>
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
void get_gcd(int &a, int &b)
{
    while (true)
    {
        cout << "gcd(" << a << "," << b << ")"
             << "\n";
        int temp = a;
        a = b;
        b = temp % b;
        if (a % b == 0)
        {
            cout << "gcd(" << a << "," << b << ")"
                 << "\n";
            cout << b << endl;
            break;
        }
    }
}
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
    int a{}, b{};
    cin >> a >> b;
    cout << "gcd(" << a << "," << b << ")"
         << "\n";
    if (a < b)
        swap(a, b);
    get_gcd(a, b);
    //程式碼結尾
    return 0;
}
