#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i, j, x, n, t;
    cin>>t;
    while(t--)
    {
        vll a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        if (n == 2)
        {
            cout<<abs(a[1] - a[0])<<"\n";
        }
        else
        {
            vll b;
            sort(a.begin(), a.end());
            for (i = 0; i < n - 1; i++)
            {
                x = a[i + 1] - a[i];
                b.push_back(x);
            }
            cout<<*min_element(b.begin(), b.end())<<"\n";
        }
    }
}