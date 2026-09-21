#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, y, z, t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if ((x >= y) && (x <= z))
        {
            cout<<"Take second dose now\n";
        }
        else
        {
            if (x > z)
            {
                cout<<"Too Late\n";
            }
            else
            {
                cout<<"Too Early\n";
            }
        }
    }
}