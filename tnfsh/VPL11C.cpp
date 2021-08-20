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
    //2i +1 2i -1
    for (int i = 0; i < n; i++)
    {
	for (int k = 0; k <= i; k++)
	    cout << ".";
	for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
	    cout << "*";
	for (int k = 0; k <= i ; k++)
	    cout << ".";
	cout << "\n"; 
    }    

    return 0;
}
