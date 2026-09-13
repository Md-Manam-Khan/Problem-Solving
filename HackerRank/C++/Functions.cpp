#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll max_of_four (ll a, ll b, ll c, ll d)
{
    ll maxi;
    maxi = max(a, b);
    maxi = max(maxi, c);
    maxi = max(maxi, d);
    return maxi;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c, d, maxi;
    cin>>a>>b>>c>>d;
    maxi = max_of_four(a, b, c, d);
    cout<<maxi;
    return 0;
}
