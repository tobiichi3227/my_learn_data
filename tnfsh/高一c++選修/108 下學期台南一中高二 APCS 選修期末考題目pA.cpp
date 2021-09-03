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
    int n{}, set{1};
    while (cin >> n)
    {
        if (n == 0) break;
        vector<string> words_array(n);
        int control = n;
        for (int i = 0; i < (n / 2); i++)
        {
            cin >> words_array[i];
            cin >> words_array[control - 1];
            control--;
        }
        if ((n & 1) == 1)
        {
            cin >> words_array[(n / 2)];
        }
        cout << "SET " << set << "\n";
        for (auto &x : words_array) 
            cout << x << "\n";
        set++;
    }
    //程式碼結尾
    return 0;
}
