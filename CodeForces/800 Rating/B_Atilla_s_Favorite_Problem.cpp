#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, t, x, i, j;
    char c;
    cin>>t;
    while(t--)
    {
        vc b;
        cin>>n;
        for(i = 0; i < n; i++)
        {
            cin>>c;
            c = tolower(c);
            b.push_back(c);
        }
        sort(b.begin(), b.end());
        x = b[b.size() - 1] - 96;
        cout<<x<<"\n";
    }
}