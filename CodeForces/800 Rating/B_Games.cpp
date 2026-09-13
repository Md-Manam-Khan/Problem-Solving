#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x, i, j, guest = 0;
    cin>>x;
    int a[x], b[x];
    for (i = 0; i < x; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (a[i] == b[j])
            {
                guest = guest + 1;
            }
        }
    }
    cout<<guest;
}