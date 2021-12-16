#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma comment(linker, "/stack:200000000")

#define ll long long
#define ld long double
#define ar array
#define rep(i, j, k) for (int i = j; i <= k; ++i)
#define ff first
#define ss second
using pii = std::pair<int, int>;
#define dd cout << '\n';


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
#define each(x, a) for (auto &x : a)

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

const int mxN = 1e3+5, mxM = 1e3+5;
int n{}, m{}, x1{}, y1{}, x2{}, y2{};
int arr[mxN][mxM];
int vis[mxN][mxM];
const int dx[] {0, 1, 0, -1};
const int dy[] {1, 0, -1, 0};

bool check(int x , int y);
void bfs(int x, int y);

int main()
{
    miyuki_is_my_wife;

    each(x, arr)
        each(y, x)
            y = -1;
    cin >> n >> m;
    rep(i, 0, n-1)
    {
        rep(j, 0, m-1)
            cin >> arr[i][j];
    }
    cin >> x1 >> y1 >> x2 >> y2;

    bfs(x1, y1);

    if (vis[x2][y2] == 0)
        cout << "-1\n";
    else 
        cout << vis[x2][y2] - 1 << "\n";

    return 0;
}

bool check(int x , int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == 0 && vis[x][y] == 0)
        return 1;
    return 0;
}

void bfs(int x, int y)
{
    queue<pii> q;
    q.push({x, y});
    vis[x][y] = 1;
    while (!q.empty())
    {
        pii now = q.front();
        q.pop();
        rep(i, 0, 3)
        {
            pii next = {now.ff + dx[i], now.ss + dy[i]};
            if (check(next.ff, next.ss))
            {
                q.push(next);
                vis[next.ff][next.ss] = vis[now.ff][now.ss] + 1;
            }
        }
    }
}
