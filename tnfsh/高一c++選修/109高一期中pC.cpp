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
//#include <cctype> //isdigit,isupper,islower

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
    int n{}, j{};
    cin >> n;
    string words{};
    for (int x = 0; x < n; x++)
	{
		cin >> words;
		for (int i = 0; i < words.length(); i++)
		{
			if (words[i] >= 65 and words[i] <= 90) words[i] += 32;
		}
		for (int i = 0; i < words.length() - 3; i++)
		{
			if (words[i] == 'p' and words[i+1] == 'i' and words[i+2] == 'n' and words[i+3] == 'k')
			{
			    j++;
			    break;
			}
			else if (words[i] == 'r' and words[i+1] == 'o' and words[i+2] == 's' and words[i+3] == 'e')
			{
			    j++;
			    break;
			}
		}
	
	}
    if (j!=0)
    	cout << j << endl;
    else 
	cout << "I must watch Star Wars with my daughter" << endl;
    
    
    //程式碼結尾
    return 0;
}
