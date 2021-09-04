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
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
            cout << "*";
        //for (int k = 0; k < i ; k++)
        //cout << " ";
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = n - 2; k > i; k--)
            cout << " ";
        for (int j = 0; j < 2 * i + 3; j++)
            cout << "*";
        //for (int k = n - 2; k > i; k--)
        //cout << " ";
        cout << endl;
    }
    return 0;
}
