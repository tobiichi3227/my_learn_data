#include <iostream>

using namespace std;

int main()
{
    double a{}, b{}, c{};
    while (cin >> a >> b >> c)
    {
        if (a > 100 || a < 0 || b > 100 || b < 0 || c > 100 || c < 0) 
        {
            cout << "ReCheckScores" << "\n";	 
            break;
        }
        if (a < 60) a*= 1.25;
        if (b < 60) b*= 1.25;
        if (c < 60) c*= 1.25;
        double average = (a + b + c) / 3;
        if (average >= 60) cout << "Hmm" << endl;
        else cout << "PleaseGoToDieOneDie" << endl; 
    }
    return 0;
}
