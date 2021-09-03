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
    int leg{};
    int array[3]{};
    bool has_ans = false;
    for (int i = 0; i < 3; i++) cin >> array[i];
    cin >> leg;
    if ((array[0] + array[1] + array[2]) > leg)
        cout << "impossible" << endl;
    for (int p = 0; p < leg; p++)
    {
        for (int q = 0; q < leg; q++)
        {
            for (int r = 0; r < leg; r++)
            {
                if (p*array[0] + q*array[1] + r*array[2] == leg)
                {
                    cout << p << " " << q << " " << r << "\n";
                    has_ans = true;
                }
            }
        }
    }
    if (has_ans == false)  
        cout << "impossible" << endl;
        
    //程式碼結尾
    return 0;
}
