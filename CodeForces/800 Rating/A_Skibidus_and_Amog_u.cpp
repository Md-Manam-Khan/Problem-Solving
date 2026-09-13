#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll i, j, t, n;
    cin>>t;
    string b;
    while (t--)
    {
        vc a;
        cin>>b;
        for (i = 0; i < b.length() - 2; i++)
        {
            a.push_back(b[i]);
        }
        a.push_back('i');
        for (auto x : a)
        {
            cout<<x;
        }
        cout<<"\n";
    }
}