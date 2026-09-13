#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i, n, t, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <long long> a;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        vector <long long> b = a;
        sort (a.begin(), a.end());
        if (a[1] - a[0] != 0)
        {
            x = 0;
        }
        else
        {
            x = n - 1;
        }
        for (i = 0; i < n; i++)
        {
            if (b[i] == a[x])
            {
                cout<<i + 1<<"\n";
            }
        }
    }
    return 0;
}