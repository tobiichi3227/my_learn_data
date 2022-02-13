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

int x{}, money_sum{0};

int main()
{
    miyuki_is_my_wife;

    cin >> x;
    if (x > 10000)
    {
        cout << "Sleeping in school" << "\n";
    }
    else
    {
        if (x <= 1500)
        money_sum = 70;
        else
        {
            money_sum += 70;
            x -= 1500;
            double n = (x / 500.0);
            money_sum += static_cast<int>(n) * 5;
        }
        cout << money_sum << "\n";    
    }
    
    return 0;
}

