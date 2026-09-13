#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c, i;
    cin>>a>>b;
    while (1)
    {
        c = 0;
        a++;
        for (i = 1; i <= a; i++)
        {
            if ((a % i) == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            break;
        }
    }
    if (a == b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}