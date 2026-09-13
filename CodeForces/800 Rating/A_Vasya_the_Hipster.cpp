#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a[2], b[2], i, n, ni, e;
    for (i = 0; i < 2; i++)
    {
        cin>>a[i];
    }
    sort (a, a + 2);
    n = (a[1] - a[0]) / 2;
    cout<<a[0]<<" "<<n;
    return 0;
}