#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, i, x, n, k;
    bool b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector <long long> a;
        i = 0;
        b = false;
        while (i < n)
        {
            cin>>x;
            a.push_back(x);
            if (x == k)
            {
                b = true;
            }
            i++;
        }
        if (b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}