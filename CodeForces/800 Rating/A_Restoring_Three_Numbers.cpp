#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(nullptr);
    long long a[4], i, b[3];
    for (i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    sort(a, a+ 4);
    b[0] = a[3] - a[0];
    b[1] = a[3] - a[1];
    b[2] = a[3] - a[2];
    cout<<b[0]<<" "<<b[1]<<" "<<b[2];
}