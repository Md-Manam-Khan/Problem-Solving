#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, k, x, i, total, rem, use;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;
        use = n / k;
        rem = n % k;
        if (x == k)
        {
            if (k == 1)
            {
                cout << "NO\n";
            }
            else if (n % (k - 1) == 0)
            {
                use = n / (k - 1);

                cout << "YES\n";
                cout << use << "\n";

                for (i = 0; i < use; i++)
                    cout << k - 1 << " ";

                cout << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (rem == 0)
            {
                cout << "YES\n";
                cout << use << "\n";

                for (i = 0; i < use; i++)
                    cout << k << " ";

                cout << "\n";
            }
            else if (rem == x)
            {
                if (k - 1 != x && k - 1 > 0)
                {
                    ll cnt = n / (k - 1);

                    if (cnt * (k - 1) == n)
                    {
                        cout << "YES\n";
                        cout << cnt << "\n";

                        for (i = 0; i < cnt; i++)
                            cout << k - 1 << " ";

                        cout << "\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "YES\n";
                cout << use + 1 << "\n";
                for (i = 0; i < use; i++)
                    cout << k << " ";
                cout << rem << "\n";
            }
        }
    }
    return 0;
}