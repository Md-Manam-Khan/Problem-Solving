#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, x, j, single, disco;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>j; 
        single = x * n;
        if ((n % 2) == 0)
        {
            n /= 2;
            disco = j * n;
        }
        else
        {
            n /= 2;
            disco = (n * j) + x;
        }
        n = min (disco, single);
        cout<<n<<"\n";
    }
}