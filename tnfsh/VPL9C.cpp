#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>

using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    
    int r{}, m{}, n{}, j{0};
    cin >> r >> m >> n;
    if (m > r) 
    {
        cout << "Bumbler government is not a necessary evil. It is just evil.";
        return 0;
    }
    cout << "S";
    for (int i = 1; i < r; i++)
    {
	//j = 0;
	if (i % m == 0) 
	{
	    cout << "T";
	    j++;
	    if (j % n == 0) 
	    {
	        cout << "X";
	        j = 0;
		i += m;
	    }       
	}
	
	
    }

    return 0;
}
