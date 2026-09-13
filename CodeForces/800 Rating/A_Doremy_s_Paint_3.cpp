#include<bits/stdc++.h>
using namespace std;
using l = long long;
using v = vector <l>;
using s = set <l>;
using m = multiset <l>;
int main ()
{
    l t, n, i, j, x, total, odd, even;
    cin>>t;
    while (t--)
    {
        total = 0;
        v a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (i >= 1)
            {
                if (a[i] != a[i - 1])
                {
                    total++;
                }
            }
        }
        if (n == 2)
        {
            cout<<"Yes\n";
        }
        else
        {
            if (total == 0)
            {
                cout<<"Yes\n";
            }
            else
            {
                sort (a.begin(), a.end());
                total = a.size() / 2;
                if ((n % 2) == 1)
                {
                    if (((a[0] == a[total]) && (a[total + 1] == a[n - 1])) || (a[0] == a[total - 1]) && (a[total] == a[n - 1]))
                    {
                        cout<<"Yes\n";
                    }
                    else
                    {
                        cout<<"No\n";
                    }
                }
                else
                {
                    if ((a[0] == a[total - 1]) && (a[total] == a[n - 1]))
                    {
                        cout<<"Yes\n";
                    }
                    else
                    {
                        cout<<"No\n";
                    }
                }    
            }
        }
    }
    return 0;
}