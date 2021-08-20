#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int b1{}, b2{}, p1{}, p2{};
    cin >> b1 >> b2 >> p1 >> p2;
    
    if ((b1 + b2) > 17 and (p1 + p2) > 17) { cout << "Draw." << endl; return 0; }
    else if ((b1 + b2) > 17) { cout << "Player wins." << endl; return 0; }
    else if ((b1 + b2) == (p1 + p2)) { cout << "Banker wins." << endl; return 0; }
    else if ((p1 + p2) > 17) { cout << "Banker wins." << endl; return 0; }
    else if ((b1 + b2) > (p1 + p2)) { cout << "Banker wins." << endl; return 0; }
    else if ((b1 + b2) < (p1 + p2)) { cout << "Player wins." << endl; return 0; }
 
    return 0;
  
}
