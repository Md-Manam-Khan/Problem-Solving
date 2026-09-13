#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, a[4], i, j, front;
    cin>>t;
    while (t--)
    {
        front = 0;
        for (i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        if (a[0] < a[1])
        {
            front++;
        }
        if (a[0] < a[2])
        {
            front++;
        }
        if (a[0] < a[3])
        {
            front++;
        }
        cout<<front<<"\n";
    }
}