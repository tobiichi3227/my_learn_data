#include <iostream>

using namespace std;

int main()
{
    int a{};
    while (cin >> a)
    {
        if (a < 0) cout << "M" << "\n";
        else if (a == 0) cout << "Z" << "\n";
        else if (a % 2 == 0) cout << "E" << "\n";
        else if (a % 2 != 0) cout << "O" << "\n";
    }
    return 0;
}
