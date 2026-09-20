#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if ((10 - x) >= 3)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}