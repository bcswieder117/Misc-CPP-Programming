/*
Name: Blaine Swieder
LeetCode (C++): Count the Number of Arrays with K Matching Adjacent Elements
Date: June 17th, 2025
*/

#include <bits/stdc++.h>
using namespace std;

static const int MOD  = 1000000007;
static const int MAXN = 100000;  // adjust up if needed

// ———————————— Global precomputation storage ————————————
static long long fact[MAXN+1], invfact[MAXN+1];
static bool        _inited = false;

// Fast modular exponentiation (also used to compute modular inverses)
static long long modpow(long long a, long long e = MOD-2) {
    long long res = 1;
    while (e) {
        if (e & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return res;
}

// One‐time initialization of factorials + inverse factorials
static void ensure_init() {
    if (_inited) return;
    _inited = true;

    fact[0] = 1;
    for (int i = 1; i <= MAXN; ++i)
        fact[i] = fact[i-1] * i % MOD;

    invfact[MAXN] = modpow(fact[MAXN]);
    for (int i = MAXN; i > 0; --i)
        invfact[i-1] = invfact[i] * i % MOD;
}

// ———————————— Solution Class ————————————
class Solution {
public:
    int countGoodArrays(int n, int m, int k) {
        ensure_init();   // now guaranteed to exist!

        // invalid k or trivial n=1
        if (k < 0 || k > n-1)     return 0;
        if (n == 1)               return (k==0 ? m % MOD : 0);

        int r = n - k;   // number of constant‐value blocks

        // Compute C(n-1, r-1)
        long long c = fact[n-1];
        c = c * invfact[r-1] % MOD;
        c = c * invfact[(n-1)-(r-1)] % MOD;

        // Multiply by m * (m-1)^(r-1)
        long long ways = c * m % MOD;
        ways = ways * modpow(m-1, r-1) % MOD;

        return int(ways);
    }
};

// — optional main() for local testing — 
int main() {
    Solution sol;
    cout << sol.countGoodArrays(3, 2, 1) << "\n";  // 4
    cout << sol.countGoodArrays(4, 2, 2) << "\n";  // 6
    return 0;
}
































