#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h{};
    while (cin >> h)
    {
        double t = sqrt(2*h/9.8);
        cout << fixed << setprecision(1) << t << endl;
    }
    return 0;
    
}
