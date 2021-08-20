#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    
    long long int n{}, sum{}, ans{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	sum += 7 * pow(10, i);
	ans += sum;
    }	
    cout << ans << "\n";

    return 0;
}
