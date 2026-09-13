#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll n, i, k, x, s;
    vll a;
    cin>>n>>k;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        if ((x + k) <= 5)
        {
            a.push_back(x);
        }
    }
    s = a.size();
    while (1)
    {
        if (s < 3)
        {
            cout<<"0";
            break;
        }
        if ((s % 3) == 0)
        {
            s /= 3;
            cout<<s;
            break;
        }
        else
        {
            s--;
        }
    }
}