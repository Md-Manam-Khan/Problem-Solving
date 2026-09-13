#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> x = {a, b, c};
    sort(x.begin(), x.end());
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}