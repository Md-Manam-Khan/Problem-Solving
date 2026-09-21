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
        cin>>x>>y;
        x *= y;
        i = 1;
        while (1)
        {
            if ((i * 4) >= x)
            {
                cout<<i<<"\n";
                break;
            }
            ++i;
        }
    }
}