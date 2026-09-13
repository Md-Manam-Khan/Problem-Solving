#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, j, t, x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if ((n >= 1) && (n <= 9))
        {
            cout<<n<<"\n";
        }
        else
        {
            s = to_string(n);
            sort(s.begin(), s.end());
            cout<<s[0]<<"\n";
        }
    }
}