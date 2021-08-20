#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x{}, y{};
    cin >> x >> y;
    if (x == 0 and y == 0) cout << "The coordinate point (0,0) lies at the origin." << "\n";
    else if (x > 0 and y > 0) cout << "The coordinate point (" << x << "," << y << ") lies in the First quandrant." << endl;
    else if (x < 0 and y > 0) cout << "The coordinate point (" << x << "," << y << ") lies in the Second quandrant." << endl;
    else if (x < 0 and y < 0) cout << "The coordinate point (" << x << "," << y << ") lies in the Third quandrant." << endl;
    else if (x > 0 and y < 0) cout << "The coordinate point (" << x << "," << y << ") lies in the Fourth quandrant." << endl;
    else if (x == 0) cout << "The coordinate point (0," << y << ") lies on y axis." << endl;
    else if (y == 0) cout << "The coordinate point (" << x << ",0) lies on x axis." << endl;

    return 0;
  
}
