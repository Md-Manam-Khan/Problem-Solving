#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, n, x;
    cin>>t;
    while (t--)
    {
        cin>>i>>n;
        cout<<((23 - i) * 60) + (60 - n)<<"\n";
    }
    return 0;
}