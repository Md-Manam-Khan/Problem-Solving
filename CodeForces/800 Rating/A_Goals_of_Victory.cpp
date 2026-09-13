#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, sum, x, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (i = 0; i < n - 1; i++)
        {
            x;
            cin >> x;
            sum += x;
        }
        cout << -sum << "\n";
    }
}