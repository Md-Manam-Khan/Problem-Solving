#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    float x, y, t, c;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>c;
        if (((x + y) / 2) > c)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}