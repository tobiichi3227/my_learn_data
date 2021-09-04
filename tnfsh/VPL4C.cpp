#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a{};
    cin >> a;
    {
        if ((a & 1) == 0)             //(a % 2 == 0)
            cout << (a >> 1) << "\n"; //a >> n -> a / 2*n
        else
            cout << (3 * a + 1) << "\n";
    }

    return 0;
}
