#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(0);
    ll i, x, n, t;
    string a;
    cin>>t;
    while (t--)
    {
        cin>>n>>a;
        if ((n == 1) || (a[0] == a[n - 1]))
        {
            cout<<n<<"\n";
        }
        else if (n == 2)
        {
            if ((a == "10") || (a == "01"))
            {
                cout<<"0\n";
            }
        }
        else
        {
            i = 0;
            x = 0;
            while (i < (n / 2))
            {
                if (a[i] != a[n - 1 - i])
                {
                    i++;
                    x++;
                }
                else
                {
                    break;
                }
            }
            n = n - (x * 2);
            cout<<n<<"\n";
        }
    }
    return 0;
}