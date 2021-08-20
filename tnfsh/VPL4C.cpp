#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a{};
    while (cin >> a)
    {
	if (a % 2 == 0)
            cout << (a/2) << "\n";
        else 
            cout << (3 * a + 1) << "\n";
    }
 
    return 0;
  
}
