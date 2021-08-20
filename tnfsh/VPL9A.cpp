#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
#include <iomanip>
//#include <cmath>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    
    int n{}, sum{}, temp{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	cin >> temp; 
	sum += temp;
    }
    double average = double(sum) / n;
    cout << fixed << setprecision(2) << average << "\n";
    return 0;
}
