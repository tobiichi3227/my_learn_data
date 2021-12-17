#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define rep(i, j, k) for (int i = j; i <= k; ++i)
#define pb push_back
#define dd cout << '\n';
#define endl '\n'
using pii = std::pair<int, int>;
using namespace std;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

const int mxN = 1e5 + 5;
int n{}, k{}, ans{};
pii arr[mxN];

int main()
{
	miyuki_is_my_wife;
	
	cin >> n >> k;
	rep(i, 0, n - 1)
		std::cin >> arr[i].ff >> arr[i].ss;
    std::sort(arr, arr+n, [](const pii& a, const pii& b) -> bool{
		return a.ff < b.ff;
	});
//	rep(i, 0, n-1)
//	    cout << arr[i].ff << " " << arr[i].ss << endl;
	for (int i = n - k; i <= n - 1; ++i)
	{
		ans += arr[i].ff;
		arr[i].ff = -1;
		arr[i].ss = -1;
	}
//	cout << ans << endl;
	std::sort(arr, arr+n, [](const pii& a, const pii& b) -> bool{
		return a.ss < b.ss;
	});
//	rep(i, 0, n-1)
//	    cout << arr[i].ff << " " << arr[i].ss << endl;
	rep(i, n - k, n - 1)
	{
		if (arr[i].ff != -1 && arr[i].ss != -1)
			ans += arr[i].ss;
	}
	cout << ans << endl;
	dd;

	return 0;
}
