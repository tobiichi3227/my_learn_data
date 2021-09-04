//沒過測資
#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>
//#include <cstdio>
//#include <cstdlib>
//#include <cctype> isdigit,isupper,islower

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); //加速cin cout用
    std::cin.tie(0);                  //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator

    //主要程序碼
    int n{};
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "This is a Xmas tree.\n";
        return 0;
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i + 1; k++)
            cout << i + 1;
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            cout << " ";
        if ((i + 1) != n)
            cout << i + 1 << endl;
    }
    //程式碼結尾

    return 0;
}
