#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t, n, i;
    string a;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if ((a.length() % 2) == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            vc b, c;
            for (i = 0; i <= (a.length() / 2) - 1; i++)
            {
                b.push_back(a[i]);
            }
            for (i = a.length() / 2; i < a.length(); i++)
            {
                c.push_back(a[i]);
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
}