#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, i, w1, w2, w3, x1, x2, m, x3;
    cin>>t;
    while(t--)
    {
        cin>>w1>>w2>>x1>>x2>>m;
        w3 = w2 - w1;
        x3 = (x2 - x1) * m;
        if (w3 <= x3)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }
}