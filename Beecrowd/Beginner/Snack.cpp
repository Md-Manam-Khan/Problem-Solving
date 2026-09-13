#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    double total;
    cin >> x >> y;
    if (x == 1)
    {
        total = 4.00 * y;
    }
    else if (x == 2)
    {
        total = 4.50 * y;
    }
    else if (x == 3)
    {
        total = 5.00 * y;
    }
    else if (x == 4)
    {
        total = 2.00 * y;
    }
    else
    {
        total = 1.50 * y;
    }
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
    return 0;
}