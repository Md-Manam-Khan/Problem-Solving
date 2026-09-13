#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, c;
    char x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vc a;
        vll b(26);
        ll baloon = 0;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            c = x - 65;
            if (b[c] == 0)
            {
                b[c] = 1;
                baloon += 2;
            }
            else
            {
                baloon ++;
            }
        }
        cout<<baloon<<"\n";
    }
}