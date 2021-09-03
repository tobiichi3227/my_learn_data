#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
//#include <map>
//#include <stack>
//#include <deque>
#include <algorithm>
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
    /*
    std::ios::sync_with_stdio(false); //加速cout用
    std::cin.tie(0); //加速cin用
    換行建議使用"\n"
    fixed << setprecision(n) << variable 取小數點用
    static_cast<new-type>(expression) 強制型別轉換
    int isdigit(int x) return 0 or int 判斷是否為0 - 9
    max_element(begin, end) return iterator
    int max = nums[0];
	int maxIndex = 0;
    for (int i = 1; i < numsLen; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
			maxIndex = i;
		}
	}
    */

    //主要程序碼
    int s{}, s1{}, r{}, r1{};
    while (cin >> s >> s1 >> r >> r1)
    {
        if (s < s1) swap(s, s1);
        else if (r < r1) swap(r, r1);
        if (s == 0) break;
        if (s == r and s1 == r1) 
        {
            cout << "Tie" << endl;
            continue;
        }
        if ((s == 1 and s1 == 2) or (s == 2 and s1 == 1))
        {
            cout << "Player 1 wins." << "\n";
            continue;
        }
        else if ((r == 1 and r1 == 2) or (r == 2 and r1 == 1))
        {
            cout << "Player 2 wins." << "\n";
            continue;
        }
        
        if ((s == s1) or (r == r1))
        {
            //if (s == s1 and r != r1) cout << 
            if ((s == s1 and r != r1))
            {
                cout << "Player 1 wins." << "\n";
                continue;
            }
            else if ((s != s1 and r == r1))
            {
                cout << "Player 2 wins." << "\n";
                continue;
            }
            else if (s > r)
            {
                cout << "Player 1 wins." << "\n";
                continue;
            }
            else if (s < r)
            {
                cout << "Player 2 wins." << "\n";
                continue;
            }
            else if (s == r)
            {
                cout << "Tie" << "\n";
                continue;
            } 
        }
        
        if (s > r and s1 > r1)
        {
            cout << "Player 1 wins." << "\n";
            continue;
        }
        else if (s == r and s1 > r1)
        {
            cout << "Player 1 wins." << "\n";
            continue;
        }
        else if (s < r and s1 < r1)
        {
            cout << "Player 2 wins." << "\n";
            continue;
        }
        else if (s == r and s1 < r1)
        {
            cout << "Player 2 wins." << "\n";
            continue;
        }
    }
    //程式碼結尾
    return 0;
}
