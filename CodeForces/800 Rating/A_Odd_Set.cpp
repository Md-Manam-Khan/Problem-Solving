#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, even, odd, i, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        even = 0, odd = 0;
        for (i = 0; i < 2 * n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
            }  
            else
            {
                odd++;
            }   
        }
        if (even == n && odd == n)
        {
            cout << "Yes\n";
        }  
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}