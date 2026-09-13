#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
bool check (ll &j)
{
    ll y = sqrt(j);
    return y * y == j;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, n, i, j, t;
    cin >> t;
    while(t--)
    {
        vll a;
        j = 0;
        cin>>n;
        for(i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            j += x;
        }
        bool b = check(j);
        if (b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}