#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x{}, money_sum{0};
    cin >> x;
    if (x > 10000) 
	{
	    cout << "Sleeping in school" << "\n";
        return 0;
	}
	if (x <= 1500)
	    money_sum = 70;
	else 
	{
	    money_sum += 70;
		x -= 1500;
		double n = (x/500.0);
    for (int i = 0; i < n; i++)
    {
	money_sum += 5;
    }
	}
    
    cout << money_sum << "\n";
    return 0;
  
}
