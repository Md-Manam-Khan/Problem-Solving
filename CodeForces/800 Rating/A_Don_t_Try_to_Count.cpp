#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n,m;
    string s,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>s>>x;
        ll ans = 0;
        while(s.size() < x.size())
        {
            s += s;
            ans++;
        }
        if (s.find(x) == string::npos)
        {
            s += s;
            ans++;
            if (s.find(x) == string::npos)
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<ans<<"\n";
            }
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}