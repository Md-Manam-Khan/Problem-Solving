#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i, t, n, x;
    cin>>t;
    while (t--)
    {
        vll a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        x = *min_element(a.begin(), a.end());
        if (a[0] == x)
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