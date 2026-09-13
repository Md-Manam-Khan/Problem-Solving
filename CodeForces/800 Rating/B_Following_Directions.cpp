#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n, i, j, top, right;
    char x;
    bool candy;
    cin>>t;
    while(t--)
    {
        candy = false;
        top = 0;
        right = 0;
        cin>>n;
        vc a;
        for(i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            if (x == 'U')
            {
                ++top;
            }
            else if (x == 'D')
            {
                --top;
            }
            else if (x == 'R')
            {
                ++right;
            }
            else
            {
                --right;
            }
            if ((top == 1) && (right == 1))
            {
                candy = true;
            }
        }
        if (candy)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}