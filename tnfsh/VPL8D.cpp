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
    bool is_prime = true;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
	if (n == 2) cout << "XD\n";
	else if (n % i == 0)
	{
	    sum += i;
	    is_prime = false;
	}
    }
    if (is_prime == true) cout << "XD\n";
    else 
    	cout << sum << "\n";
    return 0;
}
