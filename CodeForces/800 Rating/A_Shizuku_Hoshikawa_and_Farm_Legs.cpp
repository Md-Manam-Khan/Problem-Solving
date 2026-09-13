#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int m = n / 2;
            cout << (m / 2 + 1) << "\n";
        }
    }
    return 0;
}
