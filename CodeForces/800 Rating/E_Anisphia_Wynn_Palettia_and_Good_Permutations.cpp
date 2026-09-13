#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        if (n <= 6) {
            // any permutation is fine (n-2 <= 4 < 6), use identity
            for (int i = 1; i <= n; ++i) {
                if (i > 1) cout << ' ';
                cout << i;
            }
            cout << '\n';
            continue;
        }

        // starter block known to be safe
        vector<int> ans = {4,1,6,3,5,2};

        // append remaining numbers in pairs reversed: (8,7),(10,9),...
        for (int i = 7; i <= n; i += 2) {
            if (i + 1 <= n) {
                ans.push_back(i + 1);
                ans.push_back(i);
            } else {
                ans.push_back(i);
            }
        }

        for (size_t i = 0; i < ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
