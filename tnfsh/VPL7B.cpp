#include <iostream>

using namespace std;

long long int factorial(int);

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);

    int n{};
    cin >> n;
    cout << factorial(n) << "\n";

    return 0;
}

long long int factorial(int x)
{
    if (x == 0)
        return 1;
    if (x == 1)
        return 1;
    if (x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}
