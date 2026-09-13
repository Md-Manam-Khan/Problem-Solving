#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, i, x;
    cin>>n;
    vll a;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    n = accumulate(a.begin(), a.end(), 0LL);
    cout<<n;
}