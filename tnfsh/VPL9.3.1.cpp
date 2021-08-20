#include <iostream>
//#include <string> 
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    //加速cin cout用

    int x{}, y{};
    cin >> x >> y;
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
            cout << "*";
	cout << "\n";
    }

    return 0;
}
