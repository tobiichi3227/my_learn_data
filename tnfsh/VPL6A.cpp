#include <iostream>
#include <cmath>
#include <iomanip>
//#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int number{}, n{};
    cin >> n >> number;
    if (n > 45 or n <= 0) 
    {
	cout << "Error" << "\n";
	return 0;
    }
    for (int i = 1; i <= n; i++)
        cout << i << ": " << (number + i) << "\n";
 
    return 0;
  
}
