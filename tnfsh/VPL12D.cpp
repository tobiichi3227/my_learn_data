#include <iostream>
#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
#include <vector>
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

//user function 結尾

int main()
{
    
    std::ios::sync_with_stdio(false); //加速cout用
    std::cin.tie(0); //加速cin用
    /*
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
    int height{}, width{};
    cin >> height >> width;
    for (int i = 1; i <= height; i++)
    {
        if ((i & 1) == 1)
        {
            for (int i = 0; i < width; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        if ((i & 1) == 0)
        {
            for (int j = 1; j <= width; j++)
            {
                if ((j & 1) == 0)
                {
                    cout << "0";
                }
                else 
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
    //程式碼結尾
    return 0;
}
