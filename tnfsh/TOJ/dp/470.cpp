
//https://hackmd.io/@sa072686/APCS_HARD/https%3A%2F%2Fhackmd.io%2Fs%2FSknKMqIQ7 //南一中APCS2018年
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma comment(linker, "/stack:200000000")

#define ll long long
#define ld long double
#define ar array
#define fastio ios::sync_with_stdio(false), cin.tie(nullptr)
#define endl "\n"

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
#define READ(x) (x)=read()
#define LLREAD(x) (x)=llread()

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

const int mxN = 1000010;

int n, tmp, dp[2][2];

int main()
{
    fastio;
    
    /*
    自由請公假
    0:不訓練
    1:訓練
    如果第i天不訓練，最大成效就會是i-1天訓練成效最大值
    反之如果第i天訓練，最大成效就會是i-1天不訓練的訓練成效最大值，加上第i天訓練的成效值
    {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1])
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] + arr[i])
    }
    從上面的 DP 轉移式當中會發現到，實際上我們需要的資訊只有前一個 DP 值，所以我們並不需要前一個以前的 DP 值
    dp[i][j]的i只需要0,1而已
    如果當前i=0,那麼前一個DP的value就在i=1
    i=1, i=0
    {
        dp[i&1][0] = max(dp[(i-1)&1][0], dp[(i-1)&1][1])
        dp[i&1][1] = max(dp[(i-1)&1][1], dp[(i-1)&1][0] + tmp)
        ans = max(dp[(n-1)&1][0], dp[(n-1)&1][1])
    }
    */

    while(cin>>n){
		dp[0][0] = dp[0][1] = dp[1][0] = dp[1][1] = 0;
		cin>>dp[0][1];
		for(int i=1 ; i<n ; i++){
			cin>>tmp;
			dp[i%2][0] = max(dp[(i-1)%2][0], dp[(i-1)%2][1]);
			dp[i%2][1] = max(dp[i%2][1], dp[(i-1)%2][0] + tmp);
		}
		cout<<max(dp[(n-1)%2][0], dp[(n-1)%2][1])<<"\n";
	}

    return 0;
}





// int n, a, dp1,dp2;

// int main()
// {
//     fastio;
//     while (cin >> n)
//     {
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a;
//             if(i==0){
//                 dp1 = 0;
//                 dp2 = a;
//             }
//             else{
//                 dp1 = max(dp1, dp2);
//                 dp2 = max(dp2, dp1 + a);
//             }
//         }
//         cout << max(dp1, dp2) << endl;
        
        
        
//     }

//     return 0;
// }
