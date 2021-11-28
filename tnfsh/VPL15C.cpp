#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define fastio ios::sync_with_stdio(false), cin.tie(nullptr)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) static_cast<int>((x).size())

#define F_OR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...)       \
    F_ORC(__VA_ARGS__) \
    (__VA_ARGS__)
#define EACH(x, a) for (auto &x : a)

template <typename T>
ostream &operator<<(ostream &out, const vector<T> &arr)
{
    for (auto it = arr.cbegin(); it != arr.cend(); ++it)
        out << *it << " ";
    out << "\n";
    return out;
}

template <typename S, typename T>
ostream &operator<<(ostream &out, const map<S, T> &mp)
{
    for (auto it = mp.cbegin(); it != mp.cend(); ++it)
        out << it->first << " " << it->second << "\n";
    return out;
}

template <typename S, typename T>
ostream &operator<<(ostream &out, const pair<S, T> &pr)
{
    for (auto it = pr.cbegin(); it != pr.cend(); ++it)
        out << it->fist << " " << it->second << "\n";
    return out;
}

inline const int read()
{
    int ret{0}, f{1};
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        ret = (ret << 3) + (ret << 1) + (ch ^ 48), ch = getchar();
    return ret * f;
}

inline const ll llread()
{
    ll ret{0}, f{1};
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = (ll)-1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        ret = ret * (ll)10 + (ll)(ch ^ 48), ch = getchar();
    return (ll)ret * f;
}

inline void print(int x)
{
    static int sta[35];
    int top{0};
    do
    {
        sta[top++] = x % 10, x /= 10;
    } while (x);
    while (top)
        putchar(sta[--top] + 48);
}

int n{}, temp{}, sum{}, score_min{INT_MAX}, score_max{0};

int main()
{
    fastio;

    while (cin >> n) //多筆測資
    {
        FOR(n)
        {
            temp = read();
            sum += temp;
            if (temp < score_min)
                score_min = temp;
            if (temp > score_max)
                score_max = temp;
        }
        cout << sum << "\n"
             << (sum / n) << "\n"
             << score_max << "\n"
             << score_min << endl;
    }

    return 0;
}
