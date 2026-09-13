#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, i, x;
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
        long long max = 0, zero = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            else
            {
                zero = 0;
            }
            if (max <= zero)
            {
                max = zero;
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}