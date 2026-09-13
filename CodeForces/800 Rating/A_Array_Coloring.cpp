#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i, x, n, t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector <long long> a;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        if (n == 2)
        {
            if (((a[0] % 2 == 0) && (a[1] % 2 == 0)) || ((a[0] % 2 == 1) && (a[1] % 2 == 1)))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            x = 0, i = 0;
            while (i < n)
            {
                x += a[i];
                i++;
            }
            if ((x % 2) == 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}