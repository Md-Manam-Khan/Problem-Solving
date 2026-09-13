#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long k, r, s, i;
    cin>>k>>r;
    for (i = 1; ; i++)
    {
        s = i * k;
        if ((((s - r) % 10) == 0) || ((s % 10) == 0))
        {
            break;
        }
    }
    cout<<i;
}