#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if ((n % 4) == 0)
        {
            cout<< n / 4 <<"\n";
        }
        else
        {
            n = (n / 4) + 1;
            cout<<n<<"\n";
        }
    }
}