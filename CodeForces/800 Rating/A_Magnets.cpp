#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, group = 1;
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        if (i >= 1)
        {
            if (a[i] != a[i - 1])
            {
                group++;
            }
        }
    }
    cout<<group;
}