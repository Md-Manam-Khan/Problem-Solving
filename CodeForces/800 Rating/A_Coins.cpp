#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, n, t, i, j, k;
    bool z;
    cin>>t;
    while(t--)
    {
        z = false;
        cin>>n>>k;
        for (i = 1; k <= n ; i++)
        {
            k *= i;
            j = n - k;
            if ((j % 2) == 0)
            {
                z = true;
                break;
            }
        }
        if (z)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}