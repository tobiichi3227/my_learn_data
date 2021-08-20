#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int n{}, temp{};
    cin >> n;
    bool all_odd = true;
    for (int i = 0; i < n; i++)
    {
	cin >> temp;
	if (temp % 2 == 0) all_odd = false;
    }
    if (all_odd == true) cout << "Very Good!!!" << "\n";
    else cout << "Oh, No!!!" << "\n";

    return 0;
}
