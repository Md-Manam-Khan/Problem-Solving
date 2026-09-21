#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, i;
    cin>>t;
    while(t--)
    {
        vll a, b, c;
        for (i = 0; i < 2; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for (i = 0; i < 2; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for (i = 0; i < 2; i++)
        {
            cin>>x;
            c.push_back(x);
        }
        sort(all(a));
        sort(all(b));
        sort(all(c));
        if (a == b)
        {
            cout<<1<<"\n";
        }
        else if (a == c)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
}