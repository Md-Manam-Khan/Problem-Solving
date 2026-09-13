#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t, i, counter;
    cin>>t;
    long long a[t], b[t], c[t];
    for (i = 0; i < t; i++)
    {
        cin>>a[i]>>b[i];
        if (a[i] % b[i] == 0)
        {
            c[i] = 0;
        }
        else
        {
            counter = (a[i] / b[i]);
            counter++;
            c[i] = ((b[i] * counter) - a[i]);
        }
    }
    for (i = 0; i < t; i++)
    {
        cout<<c[i]<<endl;
    }
}