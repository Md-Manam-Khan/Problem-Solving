#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y, i, even = 0, odd = 0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cout<<(x * y)/100<<"\n";
    }
}