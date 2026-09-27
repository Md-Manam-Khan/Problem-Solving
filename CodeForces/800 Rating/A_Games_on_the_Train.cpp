#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n, i, x;
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
        ll maxe = *max_element(a.begin(), a.end());
        ll mine = *min_element(a.begin(), a.end());
        cout<<maxe - mine + 1<<"\n";
    }
    return 0;
}