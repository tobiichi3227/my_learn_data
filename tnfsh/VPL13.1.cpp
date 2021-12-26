#include <cassert>
#include <iostream>
using namespace std;

unsigned mod_pow(unsigned a, unsigned b, unsigned mod)
{
    unsigned result = 1;
    while (b > 0)
    {
        if (b & 1)
            result = unsigned(uint64_t(result) * a % mod);

        a = unsigned(uint64_t(a) * a % mod);
        b >>= 1;
    }
    return result;
}

bool miller_rabin(unsigned n)
{
    if (n < 2)
    {
        return false;
    }
    for (unsigned p : {2, 3, 5, 7, 11, 13, 17, 23, 29})
    {
        if (n % p == 0)
            return n == p;
    }

    int r = __builtin_ctz(n - 1);
    unsigned d = (n - 1) >> r;
    // https://www.youtube.com/watch?v=HVISmqzgIq8
    for (unsigned a : {2, 7, 61})
    {
        unsigned x = mod_pow(a % n, d, n);
        if (x <= 1 || x == n - 1)
            continue;
        for (int i = 0; i < r - 1 && x != n - 1; ++i)
            x = unsigned(uint64_t(x) * x % n);
        if (x != n - 1)
            return false;
    }
    return true;
}

int main()
{
	int n{};
	while (std::cin >> n)
	{
		if (miller_rabin(n))
			cout << "1\n;
		else
			cout << "0\n";
	}
