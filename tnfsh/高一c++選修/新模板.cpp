#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using i32 = int;
using i64 = long long;
using f32 = double;
using f64 = long double;
using pii = std::pair<i32, i32>;
using pll = std::pair<i64, i64>;
using order_multiset = __gnu_pbds::tree<i32, __gnu_pbds::null_type, less_equal<i32>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
using order_set      = __gnu_pbds::tree<i32, __gnu_pbds::null_type, less<i32>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
#define pb push_back
#define eb emplace_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &(x) : (arr))
#define c_each(x, arr) for (const auto &(x) : (arr))
#define rep(i, j, k) for (i32 (i) = (j); (i) <= (k); ++(i))
#define INF 0x3f

// #if __cplusplus > 201703L
template <typename T, typename U>
std::istream& operator>>(std::istream &is, std::pair<T, U> &val) {
    is >> val.first >> val.second;
    return is;
}
template <typename T>
std::istream& operator>>(std::istream &is, std::vector<T> &arr) {
    for (T &it : arr) {
        is >> it;
    }
    return is;
}
template <typename... T>
inline void ccin   (T&... args )  { ((std::cin >> args), ...); }
template <typename... T>
inline void ccout  (T&&... args)  { ((std::cout << args << " "), ...); }
template <typename... T>
inline void ccoutl (T&&... args)  { ((std::cout << args << " "), ...); std::cout << '\n'; }
// #endif

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

i32 main()
{
    miyuki_is_my_wife_and_sister;

    return 0;
}
