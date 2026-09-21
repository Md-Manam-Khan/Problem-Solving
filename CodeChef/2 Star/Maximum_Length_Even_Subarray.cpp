#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, x, i, j;
    cin>>t;
    while(t--)
    {
        j = 0;
        cin>>n;
        for (i = 1; i <= n; i++)
        {
            j += i;
        }
        if ((j % 2) != 0)
        {
            i = n;
            while (1)
            {
                j -= i;
                --n;
                if ((j % 2) == 0)
                {
                    break;
                }
                --i;
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}