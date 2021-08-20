#include <iostream>
#include <string> 
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
    
    string number{};
    int sum{};
    cin >> number;
    for (int i = 0; i < number.length(); i++)
	sum += number[i] - '0';
    cout << sum << endl;

    return 0;
}
