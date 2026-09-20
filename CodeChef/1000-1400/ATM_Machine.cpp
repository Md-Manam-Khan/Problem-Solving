#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, x, n, k, rem;
    cin>>t;
    while(t--)
    {
        vll a, b;
        cin>>n>>k;
        rem = k;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (rem >= x)
            {
                rem -= x;
                b.push_back(1);
            }
            else
            {
                b.push_back(0);
            }
        }
        for (auto &m : b)
        {
            cout<<m;
        }
        cout<<"\n";
    }
}