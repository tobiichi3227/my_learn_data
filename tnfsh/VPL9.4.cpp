#include <iostream>
#include <string> 
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
    //std::ios::sync_with_stdio(false); //加速cin cout用
    //std::cin.tie(0); //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    
    //主要程序碼
    string words{};
    bool encode = true;
    int n{};
    cin >> words;
    if (words[0] == '+') { encode = true; n = words[1] - '0'; }
    else if (words[0] == '-') { encode = false; n = words[1] - '0'; }
    if (encode == true)
    {
	for (int i = 2; i < words.length(); i++)
 	{
	    if (words[i] + n >= 65 and words[i] + n <= 90)
		cout << static_cast<char>(words[i] + n);
	    else if(words[i] + n > 90)
		cout << static_cast<char>(words[i] + (n % 26) - 26);
	}cout << endl;
    }
    else
    {
	for (int i = 2; i < words.length(); i++)
 	{
	    if (words[i] - n >= 65 and words[i] - n <= 90)
		cout << static_cast<char>(words[i] - n);
	    else if(words[i] - n < 65)
		cout << static_cast<char>(words[i] - (n % 26) + 26);
	}cout << endl;
    }

    //程式碼結尾

    return 0;
}
