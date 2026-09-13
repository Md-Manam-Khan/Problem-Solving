#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, j, n, x, odd, even, total;
    cin>>t;
    while (t--)
    {
        vll a;
        total = 0;
        odd = 0;
        even = 0;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            total += x;
            if ((x % 2) == 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (n == 1)
        {
            cout<<"NO\n";
        }
        else if ((n % 2) == 0)
        {
            if ((total % 2) == 1)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else
        {
            if ((odd == 0) || (even == 0))
            {
                cout<<"NO\n";
            }
            else
            {
                if ((total % 2) == 1)
                {
                    cout<<"NO\n";
                }
                else
                {
                    cout<<"YES\n";
                }
            }
        }
    }
    return 0;
}