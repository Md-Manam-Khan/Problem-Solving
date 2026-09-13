#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i, j, n, x, t, a, b, total, small, big, counter;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        small = min(a, b);
        big = max(a, b);
        a = small;
        b = big;
        total = a + b;
        counter = 1;
        while (total <= n)
        {
            small = total;
            total += big;
            big = small;
            ++counter;
        }
        cout<<counter<<"\n";
    }
}