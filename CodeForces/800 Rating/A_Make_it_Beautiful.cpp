#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vll a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        if (a[0] == a[n - 1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a[n - 1] << " ";
            for (ll i = 0; i < n - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}