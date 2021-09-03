#include <iostream>
//#include <string> 
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
#include <vector>
//#include <map>
//#include <stack>
//#include <deque>
#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>
//#include <cstdio>
//#include <cstdlib>
//#include <cctype> //isdigit,isupper,islower

using namespace std;

//user function 開始
int function1(vector<int>& array, int i, int j)
{
    if (i > j) swap(i, j);
    for (int x = i; x <= j; x++)
    {
	int test{1};
	int n{x};
	while(n>1)
	{
	    if (n % 2 == 1) 
	    {
		n = 3*n + 1;
		test++;
	    }
	    else
	    { 
		n /= 2;
		test++;
	    }
	}
	array.emplace_back(test);
	test = 1;
    } 
    //for (auto &y: array) cout << y << " ";
    //cout << endl;
    return static_cast<int>(*max_element(array.begin(), array.end()));         
}
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
    
    int i{}, j{};
    while (cin >> i >> j)
    {
	vector<int> array(abs(i-j));
        cout << i << " " << j << " " << function1(array, i, j) << "\n";
    }
    //程式碼結尾
    return 0;
}
