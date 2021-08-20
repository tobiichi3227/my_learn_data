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
    
    int n{}, m{};
    cin >> n >> m;
    for (int i = n; i <= m; i++)
        cout << i << "C=" << i*(9.0/5.0)+32 << "F" << "\n";
  
}
