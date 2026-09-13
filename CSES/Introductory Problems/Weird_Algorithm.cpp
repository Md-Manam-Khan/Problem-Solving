#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, t, i, j;
    vll a;
    cin>>n;
    a.push_back(n);
    while (true)
    {
        if (n == 1)
        {
            break;
        }
        else if ((n % 2) == 0)
        {
            n /= 2;
            a.push_back(n);
        }
        else
        {
            n *= 3;
            n += 1;
            a.push_back(n);
        }
    }
    for (auto x : a)
    {
        cout<<x<<" ";
    }
}