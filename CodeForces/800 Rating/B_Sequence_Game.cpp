#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie (0);
    ll t, n, i, x, j, count;
    cin>>t;
    while (t--)
    {
        count = 0;
        vll a, b;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (i >= 1)
            {
                if (a[i] == a[i - 1])
                {
                    count++;
                }
            }
        }
        if (n == 1)
        {
            cout<<n<<"\n"<<a[0]<<"\n";
        }
        else if (count == (n - 1))
        {
            cout<<n<<"\n";
            for (auto x : a)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        else
        {
            b.push_back(a[0]);
            for (i = 1; i < n; i++)
            {
                if (a[i] < a[i - 1])
                {
                    b.push_back(a[i]);
                    b.push_back(a[i]);
                }
                else
                {
                    b.push_back(a[i]);
                }
            }
            cout<<b.size()<<"\n";
            for (auto x : b)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
}