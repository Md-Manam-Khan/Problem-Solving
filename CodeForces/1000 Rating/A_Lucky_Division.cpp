#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, t, i, j = 0, x;
    bool yesh = false;
    cin>>x;
    string s = to_string(x);
    for (i = 0; i < s.size(); i++)
    {
        if ((s[i] == '4') || (s[i] == '7'))
        {
            yesh = true;
        }
    }
    if (yesh)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}