#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i;
    cin>>n;
    int a[n], b[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin>>a[i];
        b[a[i]] = i;
    }
    for (i = 1; i <= n; i++)
    {
        cout<<b[i]<<" ";
    }
}