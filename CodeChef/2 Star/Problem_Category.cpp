#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if (x < 100)
        {
            cout<<"Easy\n";
        }
        else if (x < 200)
        {
            cout<<"Medium\n";
        }
        else
        {
            cout<<"Hard\n";
        }
    }
}