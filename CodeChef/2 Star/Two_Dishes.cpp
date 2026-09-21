#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, a, b, c, maxd;
    cin >> t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        maxd = min(b, a + c);
        if (maxd >= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}