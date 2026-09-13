#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s)
{
    string x = "Timur";
    sort(s.begin(), s.end());
    sort(x.begin(), x.end());
    if(s == x)
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n;
        cin >> s;
        if(n != 5)
        {
            cout << "NO\n";
        }
        else
        {
            if(check(s))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}