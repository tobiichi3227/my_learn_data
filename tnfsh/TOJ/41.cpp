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
#define meminit(arr, element) memset((arr), (element), sizeof((arr)))
#define rep(i, j, k) for (i = j; i <= k; ++i)

using pii = std::pair<int, int>;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

struct Edge{
	int now, next, cost;
	Edge() : now(0), next(0), cost(0) {};
	Edge(const int now, const int next, const int cost) : now(now), next(next) , cost(cost) {};
};

bool operator<(const Edge e1, const Edge e2) { return e1.cost < e2.cost ;}

const int mxK = 1e3 + 5, mxR = 500005;
int k{}, r{};
int a{}, b{}, w{};
Edge e[mxK];
int dsu[mxK];

void initialize()
{
	int _i;
	rep(_i, 0, mxK - 1)
		dsu[_i] = _i;
}
int find(int x)
{
	return x == dsu[x] ? x : (dsu[x] = find(dsu[x]));
}

void merge(const int x, const int y) 
{
	dsu[find(x)] = find(y);
}

int main()
{
    miyuki_is_my_wife;

	int _i, _j;
	std::cin >> k >> r;
	rep(_i, 0, r - 1)
	{
		cin >> a >> b >> w;
		e[_i].now = a;
		e[_i].next = b;
		e[_i].cost = w;  
//		dsu[b] = a;
	}
	
	std::sort(e, e + r);
	initialize();
	for (_i = 0, _j = 0; _i < k - 1 && _j < r; ++_i)
	{
		while (find(e[_j].now) == find(e[_j].next)) ++_j;
		merge(e[_j].now, e[_j].next);
		++_j;
	}
	if (_i == k - 1) 
		cout << "Yes\n";
	else 
		cout << "-1\n";
    return 0;
}
