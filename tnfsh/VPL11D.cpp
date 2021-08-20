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
    
    int n{}, x1{}, temp{};
    bool is_87 = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	is_87 = false;
	cin >> x1;
	for (int j = 0; j < x1; j++)
	{
	    cin >> temp;
	    if (temp == 87)
		is_87 = true;
	}
	if (is_87 == true)
	    cout << i+1 << ":YES\n";
	else cout << i+1 << ":NO\n"; 
    }
    return 0;
}
