#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t, n, i, x;
    string a;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n == 1)
        {
            cout<<"1\n";
        }
        else
        {
            a = to_string(n);
            x = a.length();
            i = a[0] - '0' - 1;
            i *= 10;
            if (x == 1)
            {
                i += 1;
            }
            else if (x == 2)
            {
                i += 3;
            }
            else if (x == 3)
            {
                i += 6;
            }
            else
            {
                i += 10;
            }
            cout<<i<<"\n";
        }
    }
}