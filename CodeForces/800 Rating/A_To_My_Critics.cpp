#include<iostream>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll a, b, c, t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if (((a+b) >= 10)||((b+c) >= 10)||((c+a) >= 10))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}