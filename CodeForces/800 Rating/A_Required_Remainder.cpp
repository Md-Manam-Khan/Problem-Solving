#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, x, y, n, ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        ans = y + ((n-y)/x)*x;
        cout<<ans<<"\n";
    }
    return 0;
}