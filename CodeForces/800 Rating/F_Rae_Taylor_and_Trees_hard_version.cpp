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
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        // Check connectivity: min prefix <= max suffix
        vector<int> prefMin(n), sufMax(n);
        prefMin[0] = p[0];
        for (int i = 1; i < n; i++) prefMin[i] = min(prefMin[i-1], p[i]);
        sufMax[n-1] = p[n-1];
        for (int i = n-2; i >= 0; i--) sufMax[i] = max(sufMax[i+1], p[i]);

        bool ok = true;
        for (int i = 0; i < n-1; i++) {
            if (prefMin[i] > sufMax[i+1]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";
        // Simple tree construction:
        // Connect each element to the first previous element smaller than it
        vector<int> parent(n, -1);
        map<int,int> lastPos; // value -> index
        for (int i = 0; i < n; i++) {
            for (auto &[val,pos] : lastPos) {
                if (val < p[i]) {
                    parent[i] = pos;
                }
            }
            lastPos[p[i]] = i;
        }

        // Output edges
        for (int i = 0; i < n; i++) {
            if (parent[i] != -1) {
                cout << p[i] << " " << p[parent[i]] << "\n";
            }
        }
    }
}
