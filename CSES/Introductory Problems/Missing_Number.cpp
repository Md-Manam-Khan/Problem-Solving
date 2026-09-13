#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, t, i, j;
    cin>>n;
    vll a(n);
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a[x - 1] = 1;
    }
    j = (min_element(a.begin(), a.end()) - a.begin()) + 1;
    cout<<j;
}