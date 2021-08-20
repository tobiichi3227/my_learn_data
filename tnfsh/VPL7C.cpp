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
    
    int n{}, sum{};
    cin >> n;
    for (int i = 2; i < n; i++)
	if (n % i == 0)
	    sum += i;
    cout << sum << "\n";

    return 0;
}
