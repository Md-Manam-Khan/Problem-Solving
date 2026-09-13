#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i, j, n, t, x, big1, big2;
    cin>>t;
    while (t--)
    {
        vll a, b;
        for (i = 0; i < 4; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        big1 = max (a[0], a[1]);
        big2 = max (a[2], a[3]);
        sort (a.begin(), a.end());
        if (((big1 == a[2]) && (big2 == a[3])) || ((big1 == a[3]) && (big2 == a[2])))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}