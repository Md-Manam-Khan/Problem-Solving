#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, n, x, total;
    cin>>t;
    while (t--)
    {
        vll a;
        total = 0;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        x = *min_element(a.begin(), a.end());
        for (i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                total += 0;
            }
            else
            {
                total += (a[i] - x);
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}