#include <iostream>
//#include <string> 
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
#include <vector>
//#include <map>
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
    //std::ios::sync_with_stdio(false); //加速cin cout用
    //std::cin.tie(0); //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator
    
    //主要程序碼
    int n{};
    cin >> n;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
	cin >> temp[i];
    cout << *max_element(temp.begin(), temp.end()) << endl; 
    //程式碼結尾

    return 0;
}