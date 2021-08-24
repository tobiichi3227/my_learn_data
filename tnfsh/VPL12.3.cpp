#include <iostream>
//#include <string>
//#include <cstring> //strlen
//#include <sstream>
#include <iomanip> //setprecision
#include <vector>
//#include <map>
//#include <stack>
//#include <deque>
#include <algorithm>
//#include <cmath>
//#include <random>
//#include <ctime>
//#include <cstdio>
//#include <cstdlib>
//#include <cctype> isdigit,isupper,islower

using namespace std;

//user function 開始

//user function 結尾

int main()
{
    //std::ios::sync_with_stdio(false); //加速cout用
    //std::cin.tie(0); //加速cin用
    //換行建議使用"\n"
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator

    //主要程序碼
    int x{}, y{}, score_temp{};
    cin >> x >> y;
    vector<vector<int>> score;
    vector<int> find_score_max(x);
    for (int i = 0; i < x; i++)
    {
        vector<int> temp(y);
        for (int i = 0; i < y; i++)
            cin >> temp[i];
        score.emplace_back(temp);
        //temp.~vector();
    }
    for (int i = 0; i < x; i++)
    {
        int sum{};
        for (int j = 0; j < y; j++)
        {
            sum += score[i][j];
            find_score_max[i] = sum;
        }
        cout << fixed << setprecision(2) << static_cast<double>(sum) / y << " ";
    }
    cout << endl;
    for (int i = 0; i < y; i++)
    {
        int sum{};
        for (int j = 0; j < x; j++)
            sum += score[j][i];
        cout << fixed << setprecision(2) << static_cast<double>(sum) / x << " ";
    }
    cout << endl;
    int max = find_score_max[0];
    int max_index{1};
    for (int i = 1; i < find_score_max.size(); i++)
    {
        if (find_score_max[i] > max)
        {
            max = find_score_max[i];
            max_index = i;
        }
    }
    cout << max_index << endl;
    cout << static_cast<int>(count_if(find_score_max.begin(), find_score_max.end(), [&](int x) -> bool{
        return x < 60*y;
    })) << endl;
    //程式碼結尾
    return 0;
}
