#include <iostream>
//#include <string> 
//#include <string.h> //strlen
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
	    for (int k = n-i-1; k > 0; k--)
	        cout << ".";
	    for (int j = 0; j <= i; j++)
	    {
	        cout << "*";
	    }
	    cout << endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int k = n-i-1; k < n; k++)
        {
            cout << ".";
        }
        for (int j = n - i; j > 1; j--)
        {
            cout << "*";
        }
	    cout << endl;
    }
	 
    return 0;
}
