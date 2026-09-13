#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, t, i, j = 0;
    vll a;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
        if (a.size() > 1)
        {
            if (a[i] < a[i - 1])
            {
                j += abs(a[i] - a[i - 1]);
                a[i] = a[i - 1];
            }
        }
    }
    cout<<j;
}