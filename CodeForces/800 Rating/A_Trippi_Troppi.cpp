#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
using vc = vector<char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, x, total, maxi;
    string a, b, c;
    cin>>t;
    while (t--)
    {
        vc d;
        cin>>a>>b>>c;
        d.push_back(a[0]);
        d.push_back(b[0]);
        d.push_back(c[0]);
        for(i = 0; i < 3; i++)
        {
            cout<<d[i];
        }
        cout<<"\n";
    }
}