#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
using vc = vector <char>;
using sll = set <ll>;
using mll = multiset <ll>;
using pll = pair <ll, ll>;
using str = string;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, n, x;
    cin>>t;
    while(t--)
    {
        vll a, b;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        a.push_back(2);
        if (b[0] == 0)
        {
            a.push_back(2);
        }
        else
        {
            a.push_back(1);
        }
        for (i = 1; i < b.size() - 1; i++)
        {
            if ((b[i] == 0) && (a[i] == 2))
            {
                a.push_back(2);
            }
            else if ((b[i] == 0) && (a[i] == 1))
            {
                a.push_back(1);
            }
            else if ((b[i] == 1) && (a[i] == 2))
            {
                a.push_back(1);
            }
            else if ((b[i] == 1) && (a[i] == 1))
            {
                a.push_back(2);
            }
        }
        if (((a[n - 1] + a[0]) % 2) == b[n - 1])
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}