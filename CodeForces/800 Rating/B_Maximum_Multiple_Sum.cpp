#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
using vll = vector<ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, n, i, j, x, total, maxi;
    cin>>t;
    while (t--)
    {
        vll a;
        a.push_back(-1);
        a.push_back(-1);
        cin>>n;
        for (i = 2; i <= n; i++)
        {
            total = 0;
            j = 1;
            while (1)
            {
                x = i * j; 
                total += x; 
                if (x > n)
                {
                    total -= x;
                    break;
                }
                j++;
            }
            a.push_back(total);
            if (a.size() > 1)
            {
                if (a[i] == a[i - 1])
                {
                    a[i]--;
                }
            }
        }
        maxi = max_element (a.begin(), a.end()) - a.begin();
        cout<<maxi<<"\n";
    }
}