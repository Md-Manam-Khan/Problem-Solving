#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using mll = multiset <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, x, k, total;
    cin>>t;
    while(t--)
    {
        total = 0;
        mll c, d;
        cin>>n>>k;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            c.insert(x);
        }
        for (i = 0; i < n; i++)
        {
            cin>>x;
            d.insert(x);
        }
        vll a (c.begin(), c.end());
        vll b (d.begin(), d.end());
        i = 0;
        j = n - 1;
        while (k--)
        {
            if (a[i] < b[j])
            {
                swap (a[i], b[j]);
                i++;
                j--;
            }
        }
        for (i = 0; i < n; i++)
        {
            total += a[i];
        }
        cout<<total<<"\n";
    }
}