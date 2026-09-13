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
        cin>>s;
        vector <char> a(s.begin(), s.end());
        reverse(a.begin(), a.end());
        for (i = 0; i < a.size(); i++)
        {
            if (a[i] == 'p')
            {
                cout<<'q';
            }
            else if (a[i] == 'q')
            {
                cout<<'p';
            }
            else
            {
                cout<<a[i];
            }
        }
        cout<<"\n";
    }
}