#include<bits/stdc++.h>
using ll = long long;
using namespace std;
using vc = vector <char>;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, count;
    char x;
    cin>>t;
    while (t--)
    {
        count = 0;
        vll b(26);
        vc a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            j = x - 65;
            if (i == 0)
            {
                b[j] = 1;
            }
            else
            {
                if (a[i] != a[i - 1])
                {
                    if (b[j] == 1)
                    {
                        count++;
                    }
                    else
                    {
                        b[j] = 1;
                    }
                }  
            }
        }
        if ((count == 0) || (n == 1))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}