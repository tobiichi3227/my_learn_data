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
    ll value;
    priority_queue<ll> max_heap;
    vector<int> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(all(arr), [](const int p, const int q) -> bool {
        return p > q ? true : false;
    });
    max_heap.emplace(sum);
    int i = 0; bool flag = false;
    while (!max_heap.empty()) {
        if (arr[i] > max_heap.top()) {
            flag = true;
            break;
        }
        if (arr[i] == max_heap.top()) {
            max_heap.pop();
            ++i;
        } else {
            max_heap.emplace(max_heap.top() - max_heap.top() / 2);
            max_heap.emplace(max_heap.top() / 2);
            max_heap.pop();
        }
    }

    if (flag) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

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
