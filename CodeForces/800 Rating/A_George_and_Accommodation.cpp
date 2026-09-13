#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, yes = 0, a[2];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>>a[0]>>a[1];
        if (a[1] - a[0] >= 2)
        {
            yes++;
        }
    }
    cout<<yes;
}