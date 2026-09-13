#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, n, x;
    cin>>t;
    while (t--)
    {
        vll a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        if (n == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            sort (a.begin(), a.end());
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1])
                {
                    cout<<"NO\n";
                    break;
                }
                if (i == (n - 2))
                {
                    cout<<"YES\n";
                }
            }
        }
    }
    return 0;
}