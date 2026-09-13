#include<bits/stdc++.h>
using namespace std;
void judge (long long a, long long b, long long c)
{
    long long count = 0;
    if (a + b == c)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if (a + c == b)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if (b + c == a)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main ()
{
    long long t, i, a, b, c;
    cin>>t;
    for (i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        judge (a, b, c);
    }
    return 0;
}