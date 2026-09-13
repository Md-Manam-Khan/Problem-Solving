#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
using vc = vector<char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, total, maxi, count;
    char x;
    cin>>t;
    while (t--)
    {
        count = 0;
        vc a, b;
        cin>>n;
        for(i = 0; i < n; i++)
        {
            cin>>x;
            if (x == 'G')
            {
                a.push_back('B');
            }
            else
            {
                a.push_back(x);
            }
        }
        for(i = 0; i < n; i++)
        {
            cin>>x;
            if (x == 'G')
            {
                b.push_back('B');
            }
            else
            {
                b.push_back(x);
            }
        }
        for(i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}