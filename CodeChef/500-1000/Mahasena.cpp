#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
#define all(x) x.begin(),x.end()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, t, y, i, even = 0, odd = 0;
    cin>>t;
    vll a;
    for (i = 0; i < t; i++)
    {
        cin>>x;
        a.push_back(x);
        if ((x % 2) == 0)
        {
            ++even;
        }
        else
        {
            ++odd;
        }
    }
    if (even > odd)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
}