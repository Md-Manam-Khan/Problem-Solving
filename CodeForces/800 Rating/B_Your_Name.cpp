#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, j, x, n;
    char c;
    cin>>t;
    while (t--)
    {
        vc a(26), b(26);
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>c;
            x = c - 97;
            ++a[x];
        }
        for (i = 0; i < n; i++)
        {
            cin>>c;
            x = c - 97;
            ++b[x];
        }
        if (a == b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}