#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        int A = 0, B = 0;
        for (int i = 0; i < n; ++i)
        {
            A ^= a[i];
            B ^= b[i];
        }
        if (A == B)
        {
            cout << "Tie\n";
            continue;
        }
        int last = -1;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
                last = i + 1; // 1-based
        }
        if (last == -1)
        {
            cout << (A > B ? "Ajisai\n" : "Mai\n");
        }
        else
        {
            if (last % 2 == 1)
                cout << "Ajisai\n";
            else
                cout << "Mai\n";
        }
    }
    return 0;
}
