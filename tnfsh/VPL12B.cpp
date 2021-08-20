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
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //加速cin cout用
    // fixed << setprecision(n) << variable
    //取小數點用
    
    int n{}; // n(n+1) /2
    cin >> n;
    for (int i = n; i > 0; i--)
	cout << "Sigma(" << i << ")=" << i * (i + 1) / 2 << "\n";

    return 0;
}
