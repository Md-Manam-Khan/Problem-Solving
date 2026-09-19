#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, x, n;
    char c;
    bool hard = false;
    cin>>t;
    while(t--)
    {
        x = 0;
        hard = false;
        vc a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>c;
            a.push_back(c);
            if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'))
            {
                ++x;
                if (x == 4)
                {
                    hard = true;
                }
            }
            else
            {
                x = 0;
            }
        }
        if (hard)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}