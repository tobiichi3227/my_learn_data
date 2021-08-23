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

int main()
{
    std::ios::sync_with_stdio(false); //加速cin cout用
    std::cin.tie(0); //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator
    
    //主要程序碼
    int x{}, y{}, sum{};
    cin >> x >> y;
    int score[x][y];
    for (int i = 0; i < x; i++)
	for (int j = 0; j < y; j++)
	    cin >> score[i][j];
    for (int i = 0; i < x; i++)
    {
	sum = 0;
	cout << i + 1 << ",";
	for (int j = 0; j < y; j++)
	{
	    sum += score[i][j];
	    cout << score[i][j] << ",";
	}
 	cout << sum << ",";
        cout << "\n";
    }
    //程式碼結尾

    return 0;
}
