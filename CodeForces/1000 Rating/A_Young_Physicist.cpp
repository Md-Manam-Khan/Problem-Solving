#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }    
    else
    {
        cout << "NO";
    }
}