#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, x, n, i, j;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if (n <= 2)
        {
            cout<<1<<endl;
        }
        else
        {
            j = 3;
            i = 2;
            while(1)
            {
                if ((n >= j) && (n <= (j + x - 1)))
                {
                    cout<<i<<endl;
                    break;
                }
                else
                {
                    j += x;
                    i++;
                }
            }
        }
    }
}