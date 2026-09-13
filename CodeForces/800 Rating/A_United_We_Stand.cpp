#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, x, i, j, count, pos;
    cin>>t;
    while (t--)
    {
        vll a, b, c;
        count = 0;
        pos = 0;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (i >= 1)
            {
                if (a[i] != a[i - 1])
                {
                    count++;
                }
            }
        }
        if (count != 0)
        {
            sort(a.begin(), a.end());
            for (i = 1; i < n; i++)
            {
                if (a[i] != a[i - 1])
                {
                    pos = i;
                }
            }
            for (i = 0; i < pos; i++)
            {
                b.push_back(a[i]);
            }
            for (i = pos; i < n; i++)
            {
                c.push_back(a[i]);
            }
            cout<<b.size()<<" "<<c.size()<<"\n";
            for (auto x : b)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
            for (auto x : c)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}