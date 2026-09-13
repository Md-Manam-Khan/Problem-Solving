#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, a, b, m = 0, c = 0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a > b)
        {
            m++;
        }
        else if (b > a)
        {
            c++;
        }
    }
    if (m > c)
    {
        cout<<"Mishka";
    }
    else if (m < c)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
}