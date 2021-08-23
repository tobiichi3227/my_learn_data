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

//user function 開始
int prime(int x)
{
    int i{2};
    bool isPrime = true;
    while ( i <= x - 1 and isPrime)
    {
	if (x % i == 0)
	{
	    isPrime = fasle;
	    break;
	}
	i++
    }
    if (isPrime) return 1;
    else return 0;
}
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
    cin >> n;
    cout << prime(n) << endl;
    //程式碼結尾

    return 0;
}
