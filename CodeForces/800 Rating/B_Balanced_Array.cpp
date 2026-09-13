#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, count, x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if ((n % 4) != 0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            count = 0;
            n /= 2;
            vll a, b;
            for (i = 0; i < n; i++)
            {
                x = (i + 1) * 2;
                a.push_back(x);
                if (i != (n - 1))
                {
                    x = x - 1;
                    b.push_back(x);
                    count++;
                }
                else
                {
                    x += count;
                    b.push_back(x);
                }
                cout<<a[i]<<" ";
            }
            for (i = 0; i < n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
    }
}