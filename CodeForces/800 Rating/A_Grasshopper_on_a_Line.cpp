#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, t, i, j, x;
    cin>>t;
    while (t--)
    {
        cin>>x>>n;
        if ((x % n) != 0)
        {
            cout<<"1\n"<<x<<"\n";
        }
        else
        {
            i = x / n;
            j = x - i;
            if (((i % n) == 0) || ((j % n) == 0))
            {
                i++;
                j--;
            }
            cout<<"2\n"<<i<<" "<<j<<"\n";
        } 
    }
}