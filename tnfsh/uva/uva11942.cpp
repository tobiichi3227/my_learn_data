//#include <bits/stdc++.h>
//#include <bits/extc++.h>
#include <iostream>
#include <string>
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
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

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
// #pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma comment(linker, "/stack:200000000")
#define fastio std::ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;

// using namespace __gnu_pbds;

//user function 開始

//user function 結尾

int main()
{
    // int binary_search(vector<int>& arr, int key)
    // {
    //     int ret{-1}, mid{};
    //     int start{0}, end{static_cast<int>(arr.size())};
    //     while (start <= end)
    //     {
    //         mid = start + (end - start) / 2;
    //         if (arr[mid] < key)
    //             start = mid + 1;
    //         else if (arr[mid] > key)
    //             end = mid - 1;
    //         else
    //         {
    //             ret = mid;
    //             break;
    //         }
    //     }
    //     return ret;
    // }
    // bool kmp_algorithm(string &s, string &p)
    // {
    //     /*
    //     KMP solution for seaching pattern in a string
    //     Time Complexity: O(m+n)
    //     Space Complexity: O(m)
    //     args:
    //         s: target string
    //         p: pattern
    //     returns:
    //         is_match: a boolean value to show if the pattern exists in s
    //     */

    //     auto n = s.length(), m = p.length();
    //     vector<int> failure_function(m);

    //     // Build failure function recording lonest proper suffix and prefix
    //     // dp
    //     int j{}, i{};
    //     for (i = 1; i < m; i++)
    //     {
    //         j = failure_function[i-1];
    //         while (p[j] != p[i])
    //         {
    //             if (j == 0)
    //                 break;
    //             j = failure_function[j-1];
    //         }
    //         if (p[j] == p[i])
    //             failure_function[i] = j + 1;
    //         else
    //             failure_function[i] = 0;
    //     }

    //     // kmp
    //     i = 0, j = 0;
    //     while (i < n)
    //     {
    //         if (s[i] != p[j])
    //         {
    //             if (j == 0)
    //             {
    //                 i++;
    //                 continue;
    //             }
    //             // Lookup the lonest proper suffix and prefix before current character
    //             j = failure_function[j-1];
    //         }
    //         else
    //         {
    //             i++;
    //             j++;
    //         }
    //         if (j == m)
    //             return true;
    //     }
    //     return false;
    // }

    // 換行建議使用 "\n" fixed << setprecision(n) << variable 取小數點用 static_cast<new - type>(expression) 強制型別轉換 int isdigit(int x) return 0 or int 判斷是否為0 - 9 max_element(begin, end) return iterator int max = nums[0];
    // int maxIndex = 0;
    // for (int i = 1; i < numsLen; i++)
    // {
    //     if (nums[i] > max)
    //     {
    //         max = nums[i];
    //         maxIndex = i;
    //     }
    // }
    // 判斷奇數(x & 1)
    // if return 0 isn't prime else is prime x /= 2 <->x << 1 swap x,
    //     y xor的方法
    // {
    //     x = x ^ y;
    //     y = y ^ x;
    //     x = x ^ y;
    // }

    fastio;
    //主要程序碼
    int n{};
    cin >> n;
    bool first = true;
    vector<int> numbers(10);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 10; i++)
            cin >> numbers[i];
        if (first == true)
        {
            cout << "Lumberjacks:"
                 << "\n";
            first = false;
        }
        if (is_sorted(numbers.begin(), numbers.end(), [](int x, int y) -> bool{return x > y;}))
            cout << "Ordered"
                 << "\n";
        else if (is_sorted(numbers.begin(), numbers.end(), [](int x, int y) -> bool{return x < y;}))
            cout << "Ordered" << "\n";
        else
            cout << "Unordered"
                 << "\n";
    }
    //程式碼結尾
    return 0;
}
