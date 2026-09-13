#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using sl = set<ll>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(0);
    ll x, n, i, t = 0, j, k = 0;
    cin>>n;
    vll a, b;
    sl c;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
        c.insert(x);
        if (a.size() == 1)
        {
            t = 1;
        }
        else if (a[i] > a[i - 1])
        {
            t++;
        }
        else
        {
            t = 1;
        }
        b.push_back(t);
    }
    j = *max_element(b.begin(), b.end());
    if (c.size() == 1)
    {
        cout<<1;
    }
    else
    {
        cout<<j;
    }
}