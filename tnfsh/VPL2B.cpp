#include <bits/stdc++.h>
using namespace std;

// #include<bits/extc++.h>
// using namespace __gnu_pbds;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using ll = long long;
#define pb push_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &x : arr)
#define c_each(x, arr) for (const auto &x : arr)
#define rep(i, j, k) for (int i = j; i <= k; ++i)
using pii = std::pair<int, int>;

#if __cplusplus >= 201402L
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
#endif

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int a{}, b{}, c{};

int main()
{
    miyuki_is_my_wife;
    
    
    while (cin >> a >> b >> c)
    {
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        if (x1 > x2)
        {
            cout << fixed << setprecision(2) << x1 << "\n";
            cout << fixed << setprecision(2) << x2 << "\n";
        }
        else
        {
            cout << fixed << setprecision(2) << x2 << "\n";
            cout << fixed << setprecision(2) << x1 << "\n";
        }
    }
    
    return 0;
}


