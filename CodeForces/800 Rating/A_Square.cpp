#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using sll = set <ll>;
using mll = multiset <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t, i, j, n, odd, even, total, x;
    cin>>t;
    while (t--)
    {
        sll s;
        for (i = 0; i < 4; i++)
        {
            cin>>x;
            s.insert (x);
        }
        if (s.size() == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}