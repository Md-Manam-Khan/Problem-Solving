#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll even = 0;
        ll odd = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0 && a[i]%2==1)
            {
                even++;
            }
            if(i%2==1 && a[i]%2==0)
            {
                odd++;
            }
        }
        if(even != odd)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<even<<"\n";
        }
    }

    return 0;
}