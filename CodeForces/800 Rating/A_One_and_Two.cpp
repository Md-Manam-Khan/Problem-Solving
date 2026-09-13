#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie (0);
    ll n, t, x, i, j;
    cin>>t;
    while (t--)
    {
        j = 0;
        vll a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back (x);
            if (x == 2)
            {
                j++;
            }
        }
        if (j == 0)
        {
            cout<<"1\n";
        }
        else if ((j % 2) == 1)
        {
            cout<<"-1\n";
        }
        else
        {
            j /= 2;
            x = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    x++;
                }
                if (x == j)
                {
                    break;
                }
            }
            cout<<i + 1<<"\n";
        }
    }
}