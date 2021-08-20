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
    
    long long fib[75];
    int n, i, j{0};
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for( i=3 ; i<=70 ; i=i+1 )
        fib[i] = fib[i-1] + fib[i-2];
    cin >> n;
    while(j<=n)
    {
        if (n == 0) 
	{
	    cout << "0" << " ";
	    break;
	}
	cout << fib[j] << " ";
	j++;
    }

    

    return 0;
}
