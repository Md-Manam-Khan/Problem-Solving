#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool left_known = (a[0] != -1);
        bool right_known = (a[n - 1] != -1);

        long long ans;

        if (left_known && right_known) {
            ans = llabs(a[n - 1] - a[0]);
            // Fill all -1 with 0
            for (int i = 0; i < n; i++) {
                if (a[i] == -1) a[i] = 0;
            }
        } else {
            ans = 0;
            if (!left_known && !right_known) {
                // Everything becomes 0
                for (int i = 0; i < n; i++) a[i] = 0;
            } else if (left_known) {
                // Middle blanks to 0, last = first
                for (int i = 1; i < n - 1; i++) {
                    if (a[i] == -1) a[i] = 0;
                }
                a[n - 1] = a[0];
            } else { 
                // Right known only
                for (int i = 1; i < n - 1; i++) {
                    if (a[i] == -1) a[i] = 0;
                }
                a[0] = a[n - 1];
            }
        }

        cout << ans << "\n";
        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << a[i];
        }
        cout << "\n";
    }

    return 0;
}