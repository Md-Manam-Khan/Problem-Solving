#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, f, g;
    cin >> t;
    while (t--)
    {
        vll c;
        vll e;
        ll a, b, x, i, d, u;
        cin>>a>>b;
        for (i = 0; i < a; i++)
        {
            cin>>x;
            c.push_back(x);
            if (c.size() > 1)
            {
                u = c[i] - c[i - 1];
                e.push_back(u);
            }
            else
            {
                e.push_back(x);
            }
        }
        f = *max_element(e.begin(), e.end());
        g = (b - c[a - 1]) * 2;
        d = max(f, g);
        cout<<d<<"\n";
    }
}