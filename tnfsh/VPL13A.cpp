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

    int n{}, sum{};
    int i{0}, temp{};
    while (cin >> n)
    {
        i++;
        sum += n;
        if (sum >= 70000)
        {
            cout << i << endl << sum << endl;
            break;
        }
    }
    //cout << sum << "\n";

    return 0;
}
