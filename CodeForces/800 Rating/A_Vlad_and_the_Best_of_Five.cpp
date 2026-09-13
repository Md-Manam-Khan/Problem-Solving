#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll t, n, i, x, y;
    string a;
    cin>>t;
    while (t--)
    {
        x = 0, y = 0;
        cin>>a;
        sort(a.begin(), a.end());
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == 'A')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x > y)
        {
            cout<<"A\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
    return 0;
}