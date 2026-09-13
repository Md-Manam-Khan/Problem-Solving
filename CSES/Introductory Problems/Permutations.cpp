#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x = 2, i, n, j = 0;
    vll a;
    cin>>n;
    if (n == 1)
    {
        cout<<1;
    }
    else if (n <= 3)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (j == 0)
            {
                a.push_back(x);
                x += 2;
                if (x > n)
                {
                    x = 1;
                    j = 1;
                }
            }
            else
            {
                a.push_back(x);
                x += 2;
            }
        }
        for (auto x : a)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}