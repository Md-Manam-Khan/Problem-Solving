#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, x, pos, count, mini;
    cin>>t;
    while (t--)
    {
        pos = 0;
        vll a, b, c;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (i >= 1)
            {
                x = a[i] - a[i - 1];
                c.push_back(x);
            }
        }
        b = a;
        sort (a.begin(), a.end());
        if (a != b)
        {
            cout<<"0\n";
        }
        else
        {
            mini = *min_element(c.begin(), c.end());
            if ((c.size() == 1) && (mini == 0))
            {
                cout<<"1\n";
            }
            else
            {
                cout<<(mini / 2) + 1<<"\n";
            }
        }
    }
}