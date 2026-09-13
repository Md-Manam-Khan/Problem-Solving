#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main (void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, x, i, t, j, k;
    cin>>n;
    vll a;
    while(n--)
    {
        cin>>x;
        a.push_back(x);
    }
    i = accumulate(a.begin(), a.end(), 0LL);
    x = a.size() - 1;
    sort(a.begin(), a.end());
    j = 0;
    k = 0;
    while (1)
    {
        j = j + a[x];
        ++k;
        i = i - a[x];
        if (j > i)
        {
            cout<<k;
            break;
        }
        else
        {
            --x;
        }
    }
}