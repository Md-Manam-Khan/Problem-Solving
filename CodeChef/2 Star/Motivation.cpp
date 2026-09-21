#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, x, i, s, r;
    cin >> t;
    while(t--)
    {
        cin>>n>>x;
        vll a;
        for (i = 0; i < n; i++)
        {
            cin>>s>>r;
            if (s <= x)
            {
                a.push_back(r);
            }
        }
        sort(all(a));
        cout<<a[a.size() - 1]<<"\n";
    }
}