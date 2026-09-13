#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, a, b, c, n, mx, need;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> n;
        mx = max({a, b, c});
        need = (mx - a) + (mx - b) + (mx - c);
        if (n >= need && (n - need) % 3 == 0)
        {
            cout << "YES\n";
        }  
        else
        {
            cout << "NO\n";
        }    
    }
    return 0;
}