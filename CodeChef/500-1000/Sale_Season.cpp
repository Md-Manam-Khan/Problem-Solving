#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, y, z, t, i;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if (x <= 100)
        {
            cout<<x<<"\n";
        }
        else if (x <= 1000)
        {
            cout<<x - 25<<"\n";
        }
        else if (x <= 5000)
        {
            cout<<x - 100<<"\n";
        }
        else
        {
            cout<<x - 500<<"\n";
        }
    }
}