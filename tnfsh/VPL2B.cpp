#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a{}, b{}, c{};
    while (cin >> a >> b >> c)
    {
         double x1 = (-b + sqrt(b*b-4*a*c))/2*a;
         double x2 = (-b - sqrt(b*b-4*a*c))/2*a;
         if (x1 > x2)
         {
             cout << fixed << setprecision(2) << x1 << "\n";
             cout << fixed << setprecision(2) << x2 << "\n";
         }
         else 
         {
             cout << fixed << setprecision(2) << x2 << "\n";
             cout << fixed << setprecision(2) << x1 << "\n";
         }
    }
    return 0;
    
}
