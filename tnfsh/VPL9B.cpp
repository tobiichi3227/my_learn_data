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
    
    int n{}, temp{};
    bool is_87 = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	cin >> temp; 
	if (temp == 87) { is_87 = true; break; }
    }
    if (is_87 == true) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
