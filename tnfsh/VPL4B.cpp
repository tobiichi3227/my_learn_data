#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers(3);
    for (int i = 0; i < 3; i++)
        cin >> numbers[i];
    sort(numbers.begin(), numbers.end());
    if (abs(numbers[0] - numbers[1]) <= numbers[2] and numbers[2] <= (numbers[1] + numbers[0]))
    {
        double r = numbers[0] * numbers[0] + numbers[1] * numbers[1];
        double h = numbers[2] * numbers[2];
        if (r == h)
            cout << "right" << endl;
        else if (r > h)
            cout << "acute" << "\n";
        else if (r < h)
            cout << "obtuse" << "\n";
        double S = (numbers[0] + numbers[1] + numbers[2]) / 2.0;
        double area = sqrt(S * (S - numbers[0]) * (S - numbers[1]) * (S - numbers[2]));
        cout << fixed << setprecision(4) << area << "\n";
    }
    else
        cout << "illegal\nunavailable\n";
    return 0;
}
