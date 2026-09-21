#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, i;
    cin>>t;
    while(t--)
    {
        vll a;
        for (i = 0; i < 3; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(all(a));
        cout<<a[1] + a[2]<<"\n";
    }
}