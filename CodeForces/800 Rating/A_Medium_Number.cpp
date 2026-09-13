#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    long long t, x, i;
    cin>>t;
    while (t--)
    {
        vector<long long> a;
        for (i = 0; i < 3; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort (a.begin(), a.end());
        cout<<a[1]<<"\n";
    }
    return 0;
}