#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
using vll = vector<ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, total, maxi, count, x;
    cin>>t;
    while (t--)
    {
        count = 0;
        cin>>n;
        vll a(n+1,0);
        for(i = 0; i < n; i++)
        {
            cin>>x;
            a[x]++;
        }
        maxi = *max_element(a.begin(), a.end());
        if (maxi >= 3)
        {
            maxi = max_element(a.begin(), a.end()) - a.begin();
            cout<<maxi<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
}