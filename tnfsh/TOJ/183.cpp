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

const int N = 50000000;
bool sieve[N];
vector<int> prime;

int a{}, c{};
char op{};
int index1{}, index2{};
int temp{};

const int binary_search(const int& key);

int main()
{
    fastio;
    // prime.push_back(0);
    for (int i = 2; i < N; ++i)
    {
        if (!sieve[i])
            prime.push_back(i);
        for (auto& p : prime)
        {
            if (i * p >= N) break;
            sieve[i * p] = true;
            if (i % p == 0) break;
        }
    }//還沒AC
    while (std::cin >> a >> op >> c)
    {
        switch (op)
        {
        case '+':   
            index1 = binary_search(a);
            index2 = binary_search(c);
            if (index1 == -1) index1 = 0;
            if (index2 == -1) index2 = 0;
            std::cout << prime[index1+index2+1] << "\n";
            break;
        case '-':
            index1 = binary_search(a);
            index2 = binary_search(c);
            if (index1 == -1) index1 = 0;
            if (index2 == -1) index2 = 0;
            // cout << index1 << " " << index2 << endl;
            temp = (index1+1)-(index2+1);
            if (temp == 0) std::cout << "0" << "\n";
            else 
                std::cout << prime[temp-1] << "\n";
            break;
        case '*':
            index1 = binary_search(a);
            index2 = binary_search(c);
            if (index1 == -1) index1 = 0;
            if (index2 == -1) index2 = 0;
            std::cout << prime[(index1+1)*(index2+1)-1] << "\n";
            break;
        case '/':
            index1 = binary_search(a);
            index2 = binary_search(c);
            if (index1 == -1) index1 = 0;
            if (index2 == -1) index2 = 0;
            temp = (index1+1)/(index2+1);
            if (temp == 1) std::cout << "0" << "\n";
            else
                std::cout << prime[temp-1] << "\n";
            break;
        default:
            break;
        }        
    }

    return 0;
}

const int binary_search(const int& key)
{
    int low{0}, high{sz(prime) - 1};
    while (low <= high)
    {
        int mid{static_cast<int>((low+high)/2)};
        if (key == prime[mid])
        {
            return mid;
        }
        else if (key > prime[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

