#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i, n, h;
    cin>>n>>h;
    int a[n], width = n;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] > h)
        {
            width++;
        }
    }
    cout<<width;
}