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
#include <cctype>

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
	if (str[i] == '"') cout << "";
	else if ((str[i] < 65 or str[i] > 90) and (str[i] < 97 or str[i] > 122) and (str[i] < 48 or str[i] > 57)) cout << str[i];
	else if ((str[i] >= 65 and str[i] <= 90) or (str[i] >= 97 and str[i] <= 122) or (str[i] >= 48 and str[i] <= 57))
	{
	    if (str[i] + n >= 97 and str[i] + n <= 122 and islower(str[i]) != 0)
		{ cout << static_cast<char>(str[i] + n); continue; }
	    else if (str[i] + n > 122 and islower(str[i]) != 0)
	    {
		if (str[i] + (n % 26) > 122)
		{ 
		    cout << static_cast<char>(str[i] + (n % 26) - 26); 
		    continue; 
		}
		else 
		{
		    cout << static_cast<char>(str[i] + (n % 26)); 
		    continue;
		}
	    }
	    if (str[i] + n >= 65 and str[i] + n <= 90 and isupper(str[i]) != 0)
		{ cout << static_cast<char>(str[i] + n); continue; }
	    else if (str[i] + n > 90 and isupper(str[i]) != 0)
	    {
		if (str[i] + (n % 26) > 90)
		{ 
		    cout << static_cast<char>(str[i] + (n % 26) - 26); 
		    continue; 
		}
		else 
		{
		    cout << static_cast<char>(str[i] + (n % 26)); 
		    continue;
		}
	    }
	    if (str[i] + n >= 48 and str[i] + n <= 57 and isdigit(str[i]) != 0)
		{ cout << static_cast<char>(str[i] + n); continue; }
	    else if (str[i] + n > 57 and isdigit(str[i]) != 0)
	    {
		if (str[i] + (n % 9) > 57)
		{ 
		    cout << static_cast<char>(str[i] + (n % 10) - 10); 
		    continue; 
		}
		else 
		{
		    cout << static_cast<char>(str[i] + (n % 10)); 
		    continue;
		}
	    }
	}
    }
    cout << endl;
    //程式碼結尾

    return 0;
}
