#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll i, x, n, total = 0;
    vll a;
    string s;
    for (i = 0; i < 4; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>s;
    for (i = 0; i < s.length(); i++)
    {
        n = (s[i] - '0') - 1;
        total += a[n];
    }
    cout<<total;
}