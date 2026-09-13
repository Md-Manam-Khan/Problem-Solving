#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll a, b, t, n;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if ((a % 2) == 0)
        {
            n = (a / 2) + ((a / 2) - 1);
        }
        else
        {
            n = (a / 2) * 2;
        }
        cout<<n<<"\n";
    }
    return 0;
}