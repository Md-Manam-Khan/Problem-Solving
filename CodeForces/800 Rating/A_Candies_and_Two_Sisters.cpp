#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t, i, n;
    cin>>t;
    long long a[t];
    for (i = 0; i < t; i++)
    {
        cin>>a[i];
        if (a[i] % 2 == 1)
        {
            a[i] = a[i] / 2;
        }
        else
        {
            a[i] = (a[i] / 2) - 1;
        }
    }
    for (i = 0; i < t; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}