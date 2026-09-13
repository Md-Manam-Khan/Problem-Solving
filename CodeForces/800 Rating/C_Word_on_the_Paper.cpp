#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, n, i, j;
    char c;
    cin>>t;
    while(t--)
    {
        vc a;
        for (i = 0; i < 64; i++)
        {
            cin>>c;
            if ((c >= 'a') && (c <= 'z'))
            {
                a.push_back(c);
            }
        }
        for (auto m : a)
        {
            cout<<m;
        }
        cout<<"\n";
    }
    return 0;
}