#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a < b)
        {
            cout<<"Second\n";
        }
        else if(a > b)
        {
            cout<<"First\n";
        }
        else
        {
            if(c % 2)
                cout<<"First\n";
            else
                cout<<"Second\n";
        }
    }
    return 0;
}