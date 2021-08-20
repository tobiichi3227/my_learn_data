#include <iostream>
//#include <string> 
//#include <sstream>
//#include <iomanip>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    //加速cin cout用
    // fixed << setprecision(n) << variable
    //取小數點用
    
    int n{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	for (int j = n - i; j > 0; j--)
	    cout << "*";
	cout << endl;
    }
	 
    return 0;
}
