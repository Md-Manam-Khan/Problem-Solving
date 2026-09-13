#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, n; 
    char x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vc a;
        ll total = 0, dot = 0;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (x == '.')
            {
                dot++;
            }
            if (i >= 2)
            {
                if ((a[i - 1] == '.') && (a[i - 2] == '.') && (a[i] == '.'))
                {
                    total = 1;
                }
            }
        }
        if (total == 1)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<dot<<"\n";
        }
    }
}