#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t;
    string a;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if ((a[0] == 'a') || (a[1] == 'b') || (a[2] == 'c'))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}