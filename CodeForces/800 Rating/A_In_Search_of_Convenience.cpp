#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t, x0, y0, r;
    cin>>t;
    while (t--)
    {
        cin>>x0>>y0>>r;
        cout<<x0<<" "<<y0 + r<<"\n";
    }
    return 0;
}