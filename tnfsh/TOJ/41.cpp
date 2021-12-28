#include <bits/stdc++.h>
using namespace std;

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
#define rep(i, j, k) for (i = j; i <= k; ++i)
using pii = std::pair<int, int>;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

struct Edge
{
    int now, next, cost;
};
bool operator<(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; }
const int mxK = 1e3 + 5, mxR = 5 * (1e6 + 1);
int k{}, r{}, a{}, b{}, w{}, ans{};
Edge e[mxR];
int p[mxR];

void init()
{
    int _i;
    rep(_i, 0, mxK - 1) p[_i] = _i;
}
// http://web.ntnu.edu.tw/~algo/Set.html
// DSU 並查集
int find(const int &x) { return x == p[x] ? x : (p[x] = find(p[x])); }
void merge(const int &x, const int &y) { p[find(x)] = find(y); }
int kruskal();

int main()
{
    miyuki_is_my_wife;

    int _i, _j;
    cin >> k >> r;
    rep(_i, 0, r - 1)
    {
        cin >> a >> b >> w;
        e[_i].now = a, e[_i].next = b, e[_i].cost = w;
    }

    if (kruskal() == k - 1)
        cout << ans << '\n';
    else
        cout << "-1\n";

    return 0;
}

int kruskal()
{
    // http://web.ntnu.edu.tw/~algo/SpanningTree.html
    //最小生成樹
    init();
    sort(e, e + r);
    int _i, _j;
    for (_i = 0, _j = 0; _i < k - 1 && _j < r; ++_i)
    {
        while (find(e[_j].now) == find(e[_j].next))
            ++_j;
        merge(e[_j].now, e[_j].next);
        ans += e[_j].cost;
        ++_j;
    }
    return _i;
}

/*
    題目敘述:
    {
        網址:https://toj.tfcis.org/oj/pro/41/

    }
    解題想法:
    {
        最小生成樹-kruskal算法
        直接存邊
        先把依照邊的權重排列一次 O(eloge)
        連結MSS 使用並查集 O(ea(e,v))
    }
    複雜度分析:
    {
        時間複雜度:O(eloge)
        空間複雜度:O(e) //必要的話
    }
*/
