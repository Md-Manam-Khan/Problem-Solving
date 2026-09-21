#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y;
    cin>>t>>x;
    y = t + x;
    string s = to_string(y);
    s += '1';
    cout<<s;
}