#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, k, i, count = 0;
    cin>>n>>k;
    if (((1 <= n) && (n <= 50)) && ((1 <= k) && (k <= 50)))
    {
        int a[n];
        for (i = 0; i < n; i++)
        {
        cin>>a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (((a[i] > a[k - 1]) || (a[i] == a[k - 1])) && (a[i] != 0))
            {
                count++;
            }
        }
        cout<<count;
    }
    else
    {
        return 0;
    }
}