#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y, z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        x *= 4;
        x += y;
        cout<<x<<"\n";
    }
}