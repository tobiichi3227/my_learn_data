#include <bits/stdc++.h>
using namespace std;

// #include<bits/extc++.h>
// using namespace __gnu_pbds;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using i32 = int;
using i64 = long long;
using f32 = double;
using f64 = long double;
using pii = std::pair<i32, i32>;
using pll = std::pair<i64, i64>;
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

template<typename... T>
void ccin   (T&... args) { ((cin >> args), ...); }
template<typename... T>
void ccout  (T&&... args) { ((cout << args << " "), ...); }
template<typename... T>
void ccoutl (T&&... args) { ((cout << args << " "), ...); cout << '\n'; }

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

i32 main()
{
    miyuki_is_my_wife_and_sister;

    return 0;
}
