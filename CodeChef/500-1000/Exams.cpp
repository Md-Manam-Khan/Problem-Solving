#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y, z;
    float m;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        x *= y;
        x /= 2;
        if (z > x)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}