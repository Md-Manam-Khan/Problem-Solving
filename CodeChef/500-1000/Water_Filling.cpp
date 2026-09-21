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
        i = 0;
        cin>>x>>y>>z;
        if (x == 1)
        {
            ++i;
        }
        if (y == 1)
        {
            ++i;
        }
        if (z == 1)
        {
            ++i;
        }
        if (i >= 2)
        {
            cout<<"Not now\n";
        }
        else
        {
            cout<<"Water filling time\n";
        }
    }
}