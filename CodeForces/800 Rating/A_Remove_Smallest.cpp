#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, i, x, j;
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
        if (n == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            sort (a.begin(), a.end());
            for (i = 0; i < n - 1; i++)
            {
                if ((a[i + 1] - a[i]) > 1)
                {
                    cout<<"NO\n";
                    break;
                }
            }
            if (i == n - 1)
            {
                cout<<"YES\n";
            }
        }
    }
    return 0;
}