#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
#include <iomanip> //setprecision
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
    int n{}, sum{};
    cin >> n;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
        cin >> temp[i];

    for (auto &x : temp)
        sum += x;
    int max = temp[0];
	int maxIndex = 0;
	for (int i = 1; i < temp.size(); i++)
	{
		if (temp[i] > max)
		{
			max = temp[i];
			maxIndex = i;
		}
	}
    
    auto a = static_cast<int>(count_if(temp.begin(), temp.end(), [](int x) -> bool
                      { return (x <= 100 and x >= 90); }));
    auto b = static_cast<int>(count_if(temp.begin(), temp.end(), [](int x) -> bool
                      { return (x <= 89 and x >= 80); }));
    auto c = static_cast<int>(count_if(temp.begin(), temp.end(), [](int x) -> bool
                      { return (x <= 79 and x >= 70); }));
    auto d = static_cast<int>(count_if(temp.begin(), temp.end(), [](int x) -> bool
                      { return (x <= 69 and x >= 60); }));
    auto e = static_cast<int>(count_if(temp.begin(), temp.end(), [](int x) -> bool
                      { return (x < 60); }));
    //cout << a << b << c << d << e;
    cout << fixed << setprecision(2) << static_cast<double>(sum) / static_cast<double>(n) << '\n';
    cout << maxIndex+1 << '\n';
    cout << "A:";for (int i = 0; i < a; i++) cout << "*"; cout << '\n';
    cout << "B:";for (int i = 0; i < b; i++) cout << "*"; cout << '\n';
    cout << "C:";for (int i = 0; i < c; i++) cout << "*"; cout << '\n';
    cout << "D:";for (int i = 0; i < d; i++) cout << "*"; cout << '\n';
    cout << "E:";for (int i = 0; i < e; i++) cout << "*"; cout << '\n';

    //程式碼結尾
    return 0;
}
