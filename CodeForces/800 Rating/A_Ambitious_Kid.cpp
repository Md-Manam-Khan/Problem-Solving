#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, n, z = 0, mini, i;
    vll a, b;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
        if (x == 0)
        {
            z++;
        }
        else
        {
            b.push_back(abs(0 - x));
        }
    }
    if (z > 0)
    {
        cout<<0;
    }
    else
    {
        cout<<*min_element (b.begin(), b.end());;
    }
}