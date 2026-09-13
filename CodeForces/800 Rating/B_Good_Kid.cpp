#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie (0);
    ll t, n, i, x, mini;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vll a;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        mini = min_element(a.begin(), a.end()) - a.begin();
        a[mini] += 1;
        x = 1;
        for (i = 0; i < n; i++)
        {
            x *= a[i];
        }
        cout<<x<<"\n";
    }
}