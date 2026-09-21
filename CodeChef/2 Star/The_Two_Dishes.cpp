#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, y, z, t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if (x == y)
        {
            cout<<y<<"\n";
        }
        else if (x > y)
        {
            cout<<y<<"\n";
        }
        else
        {
            y -= x;
            y = x - y;
            cout<<y<<"\n";
        }
    }
}