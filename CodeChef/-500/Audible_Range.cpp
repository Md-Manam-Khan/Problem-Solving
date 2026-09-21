#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y;
    cin>>t;
    while (t--)
    {
        cin>>x;
        if ((x >= 67) && (x <= 45000))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}