#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, a, b, c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if ((a + b) == c)
        {
            cout<<"+\n";
        }
        else
        {
            cout<<"-\n";
        }
    }
    return 0;
}