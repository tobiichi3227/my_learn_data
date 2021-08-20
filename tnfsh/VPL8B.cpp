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
    bool is_all_pass = true;
    for (int i = 0; i < n; i++)
    {
	cin >> temp;
	if (temp < 60) is_all_pass = false;
    }
    if (is_all_pass == true) cout << "HAHA, I PASS!!! Bite me!!!" << "\n";
    else cout << "Oh, No!!!" << "\n";

    return 0;
}
