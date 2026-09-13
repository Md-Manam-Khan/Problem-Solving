#include <bits/stdc++.h>
using namespace std;

// Fast exponentiation (avoid overflow)
long long fast_pow(long long base, int exp, long long limit) {
    long long res = 1;
    while (exp--) {
        if (res > limit / base) return limit + 1; // overflow
        res *= base;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        long long prev = 0;

        for (int i = 2; i <= n; i++) {
            // find maximum k s.t. i^k ≤ m
            int k_max = 0;
            long long p = 1;
            while (true) {
                long long next = fast_pow(i, k_max + 1, m);
                if (next > m) break;
                k_max++;
            }

            long long chosen = 0;
            int k = k_max;
            while (k >= 0) {
                long long p = fast_pow(i, k, m);
                long long x = ((prev / p) + 1) * p; // first multiple > prev
                if (x <= m) {
                    chosen = x;
                    ans += k;
                    prev = chosen;
                    break;
                }
                k--;
            }
            if (chosen == 0) { // fallback
                prev = prev + 1;
            }
        }
        cout << ans << "\n";
    }
}
