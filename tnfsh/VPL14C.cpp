#include <iostream>
//#include <string> 
//#include <string.h> //strlen
//#include <sstream>
//#include <iomanip>
#include <vector>
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
    
    int number{},i{};
    cin >> number;
    while (number >= 1)
    {
        i++;
	if (number == 1) break;
	else if (number % 2 != 0) number = 3 * number + 1;
	else if (number % 2 == 0) number /= 2;
    }
    cout << i << endl;

    return 0;
}
