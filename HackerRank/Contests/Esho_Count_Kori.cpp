#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, i, x, q;
    cin>>n;
    vector <long long> a;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>x;
    while (x--)
    {
        long long count = 0;
        cin>>q;
        for (i = 0; i < n; i++)
        {
            if (a[i] == q)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}