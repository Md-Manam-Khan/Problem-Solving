#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll check (ll &a, ll &b, ll &c)
{
    if ((a < b) && (b < c))
    {
        return 1;
    }
    else if ((a < b) && (b > c))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c, n;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        a = check (a, b, c);
        if (a == 1)
        {
            cout<<"STAIR\n";
        }
        else if (a == 2)
        {
            cout<<"PEAK\n";
        }
        else
        {
            cout<<"NONE\n";
        }
    }
}