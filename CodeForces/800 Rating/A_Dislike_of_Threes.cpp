#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i, n, t;
    string x;
    vll a;
    for (i = 1; i <= 1666; i++)
    {
        x = to_string(i);
        n = x.length();
        if (((i % 3) == 0) || (x[n - 1] == '3'))
        {
            continue;
        }
        else
        {
            a.push_back(i);
        }
    }
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<a[n - 1]<<"\n";
    }
}