#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(0);
    ll i, n, maxi, x, total = 0;
    cin>>n;
    vll a;
    for (i = 0; i < n; i++)
    {
        cin>>maxi;
        a.push_back(maxi);
    }
    maxi = *max_element(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        if (a[i] != maxi)
        {
            x = maxi - a[i];
            total += x;
        }
    }
    cout<<total;
}