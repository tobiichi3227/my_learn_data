#include <iostream>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    
    int m{}, n{};
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
	cout << i << ":" << m*(i*m)*(i*m) << "\n";

    return 0;
}
