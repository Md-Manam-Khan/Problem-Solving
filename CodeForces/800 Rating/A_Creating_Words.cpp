#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t;
    string a, b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        swap(a[0], b[0]);
        cout<<a<<" "<<b<<"\n";
    }
}