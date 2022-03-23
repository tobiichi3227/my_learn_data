#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using ll = long long;
using pii = std::pair<int, int>;
#define pb push_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(i, arr) for (auto &x : arr)
#define c_each(i, arr) for (const auto &i : arr)
#define rep(i, j, k) for (i = j; i <= k; ++i)
#define print(str) cout << (str)

void solve() noexcept
{
    int n{};
    cin >> n;
    int type;
    if (n % 3 == 1) {
        type = 1;
    } else {
        type = 2;
    }
    int sum = 0;
    while (sum != n) {
        cout << type;
        sum += type;
        type = 3 - type;
    }
    dd;
}

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    int tc{}; //int tc{1};
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
