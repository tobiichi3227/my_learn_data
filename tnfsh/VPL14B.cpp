#include <iostream>
#include <string>
//#include <string.h> //strlen
//#include <sstream>
//#include <iomanip>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //加速cin cout用
    // fixed << setprecision(n) << variable
    //取小數點用

    string number{}; //比較好的解 不太會受到int上限的影響
    int sum{};
    cin >> number;
    for (int i = 0; i < number.length(); i++)
        sum += number[i] - '0';
    cout << sum << endl;
    /*
    標準解 原理: 一個數的個位數對10取餘數就是個位數本身,接著再將這個以計算的個位數消掉
    將這個數/=10,就可以將以計算的數削掉,因為long long int,所以不會有小數點的產生
    long long int temp{}, sum{};
    cin >> temp;
    while(temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    */
    return 0;
}
