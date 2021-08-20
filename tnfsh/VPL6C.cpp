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
    
    int n{};
    cin >> n;
    for (int i = 2; i < n; i++)
        if (n % i == 0) cout << i << "\n";
    return 0;
    
}
