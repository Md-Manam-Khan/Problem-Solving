#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    float t, s, a, b, c;
    cin >> t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        if (c != 0)
        {
            s = s + ((s * c) / 100);
        }
        if ((s < a) || (s > b))
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    
}