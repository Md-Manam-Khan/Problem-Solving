#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, i, t, a, x, b, mini, maxi;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a >= b)
        {
            mini = b * 2;
            maxi = a;
        }
        else
        {
            mini = a * 2;
            maxi = b;
        }
        if (mini >= maxi)
        {
            cout<<pow(mini,2)<<"\n";
        }
        else
        {
            cout<<pow(maxi,2)<<"\n";
        }
    }
}