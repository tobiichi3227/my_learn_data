#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
//#include <map>
#include <stack>
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
    //std::ios::sync_with_stdio(false); //加速cin cout用
    //std::cin.tie(0); //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator

    //主要程序碼
    int n{};
    string str{};
    while (cin >> n)
    {
        cin >> str;
        stack<int> st;
        for (auto &x : str)
        {
            if (x == '(')
                st.push(1);
            else if (x == ')')
            {
                if (st.top() == 1)
                    st.pop();
                else 
                    st.push(0);
            }
        }
        if (st.empty())
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
    //程式碼結尾
    return 0;
}
