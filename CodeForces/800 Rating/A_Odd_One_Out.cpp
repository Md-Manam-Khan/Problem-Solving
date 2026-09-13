#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, i, t, x;
    cin>>t;
    while (t--)
    {
        vector <long long> a;
        for (i = 0; i < 3; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort (a.begin(), a.end());
        if (a[0] != a[1])
        {
            cout<<a[0]<<"\n";
        }
        else
        {
            cout<<a[2]<<"\n";
        }
    }
    return 0;
}