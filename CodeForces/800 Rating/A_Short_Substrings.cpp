#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector<char>;
int main()
{
    ll t, i, s;
    string a;
    cin >> t;
    while (t--)
    {
        vc b;
        cin >> a;
        s = a.length();
        b.push_back(a[0]);
        b.push_back(a[1]);
        if (s != 2)
        {
            for (i = 3; i < s; i++)
            {
                if ((i % 2) == 1)
                {
                    b.push_back(a[i]);
                }
            }
        }
        for (i = 0; i < b.size(); i++)
        {
            cout << b[i];
        }
        cout << "\n";
    }
    return 0;
}