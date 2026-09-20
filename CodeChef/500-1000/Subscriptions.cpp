#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, y, t, total;
    cin>>t;
    while(t--)
    {
        total = 0;
        cin>>x>>y;
        if ((x >= 1) && (x <= 6))
        {
            cout<<y<<"\n";
        }
        else if ((x % 6) == 0)
        {
            cout<<(x / 6) * y<<"\n";
        }
        else
        {
            cout<<((x / 6) + 1) * y<<"\n";
        }
    }
}