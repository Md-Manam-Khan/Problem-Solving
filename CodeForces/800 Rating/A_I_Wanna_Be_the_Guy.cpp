#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n, i, max1, m;
    cin>>n;
    long long z[n+1] = {0};
    cin>>max1;
    for (i = 0; i < max1; i++)
    {
        cin>>m;
        z[m] = 1;
    }
    cin>>max1;
    for (i = 0; i < max1; i++)
    {
        cin>>m;
        z[m] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (z[i] == 0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}