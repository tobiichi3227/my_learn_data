#include <iostream>
//#include <string> 
//#include <string.h> //strlen
//#include <sstream>
#include <iomanip>
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
    
    int n{}, temp{}, temp2{};
    double sum{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	      cin >> temp >> temp2;
	      sum += static_cast<double>(temp2) - static_cast<double>(temp);
	      cout << "Inv(" << (i + 1) <<"): " << fixed << setprecision(2) << sum << "\n";
    }
    return 0;
}
