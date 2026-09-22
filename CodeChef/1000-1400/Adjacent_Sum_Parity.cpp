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
        vll a, b, c;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            b.push_back(x); // 1 0 1 0 -> 3 4 4 3
        }
        for (i = 0; i < b.size() - 1; i++)
        {
            if (i == 0)
            {
                a.push_back(3);
                if (b[i] == 0)
                {
                    a.push_back(3);
                }
                else
                {
                    a.push_back(4);
                }
            }
            else
            {
                if (b[i] == 0)
                {
                    a.push_back(4);
                }
                else
                {
                    a.push_back(3);
                }
            }
        }
        for (i = 0; i < a.size() - 1; i++) // 3 4 4 3
        {
            if (((a[i] + a[i + 1]) % 2) == 0) // 1 0 1
            {
                c.push_back(0);
            }
            else
            {
                c.push_back(1);
            }
        }
        if (((a[0] + a[a.size() - 1]) % 2) == 0)
        {
            c.push_back(0);
        }
        else
        {
            c.push_back(1);
        }
        if (b == c)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}