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

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); //加速cin cout用
    std::cin.tie(0); //加速cin cout用
    // fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    
    //主要程序碼
    int n{};
    string str{};
    getline(cin, str);  //97 - 122
    cin >> n;
    for (int i = 0; i < str.length(); i++)
    {
	if (str[i] < 97 or str[i] > 122) cout << str[i];
	else if (str[i] >= 97 and str[i] <= 122)
	{
	    if (str[i] + n >= 97 and str[i] + n <= 122)
		cout << static_cast<char>(str[i] + n);
	    else if (str[i] + n > 122)
		cout << static_cast<char>(str[i] + n - 26);
	}
    }
    //程式碼結尾
    return 0;
}
