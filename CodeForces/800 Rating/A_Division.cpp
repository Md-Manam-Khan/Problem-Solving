#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, i;
    cin>>t;
    long long a[t];
    for (i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    i = 0;
    while (t--)
    {
        if (a[i] <= 1399)
        {
            cout<<"Division 4\n";
        }
        else if ((a[i] >= 1400) && (a[i] <= 1599))
        {
            cout<<"Division 3\n";
        }
        else if ((a[i] >= 1600) && (a[i] <= 1899))
        {
            cout<<"Division 2\n";
        }
        else if (a[i] >= 1900)
        {
            cout<<"Division 1\n";
        }
        ++i;
    }
    return 0;
}