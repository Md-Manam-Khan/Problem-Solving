#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, t, i, j = 1;
    vll a;
    string s;
    cin>>s;
    if (s.size() == 1)
    {
        cout<<1;
        return 0;
    }
    else
    {
        for (i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                j++;
                a.push_back(j);
            }
            else
            {
                a.push_back(j);
                j = 1;
            }
        }
    }
    cout<<*max_element(a.begin(), a.end());
}