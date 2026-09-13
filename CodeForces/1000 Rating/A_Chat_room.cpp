#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, x, i, j, t;
    string s, xs = "hello";
    cin>>s;
    j = 0, i = 0;
    x = s.size() - 1;
    while (i <= x)
    {
        if(s[i] == xs[j])
        {
            ++j;
        }
        ++i;
    }
    if (j == 5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}