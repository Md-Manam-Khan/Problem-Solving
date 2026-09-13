#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000003;
const int MAXN = 200005;

long long fact[MAXN];

// Fast exponentiation modulo MOD
long long modpow(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

// Modular inverse
long long modinv(long long x) {
    return modpow(x, MOD - 2);
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) fact[i] = fact[i-1] * i % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> inc(32, 0); // increments at each doubling level
        int maxLevel = 0;

        // Compute increments at each level per number
        for (int i = 0; i < n; i++) {
            long long x = b[i] - a[i];
            int level = 0;
            while (x > 0) {
                inc[level] += x % 2;
                x /= 2;
                level++;
            }
            maxLevel = max(maxLevel, level);
        }

        long long totalOps = 0;
        long long ways = 1;

        for (int level = 0; level < maxLevel; level++) {
            int k = inc[level];
            totalOps += k;
            ways = ways * fact[k] % MOD;
            totalOps++; // one doubling for this level
        }
        totalOps--; // no doubling after the last level

        cout << totalOps << " " << ways % MOD << "\n";
    }
}
