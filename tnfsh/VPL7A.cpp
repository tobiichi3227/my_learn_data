#include <iostream>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);

    long long int x{}, y{}, sum{};
    cin >> x >> y;
    if (x < y)
    {
        for (int i = x; i <= y; i++)
            sum += i;
    }
    else if (x == y)
        cout << x << endl;
    else if (x > y)
    {
        for (int i = y; i <= x; i++)
            sum += i;
    }
    cout << sum << "\n";

    return 0;
}
