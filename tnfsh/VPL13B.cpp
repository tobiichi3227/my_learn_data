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

    int n{};
    cin >> n;
    while (true)
    {
        if ((n & 1) == 0)
            n /= 2;
        else
        {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
