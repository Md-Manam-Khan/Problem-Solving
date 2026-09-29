#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, i;
    bool sorted;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long a[n];
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sorted = true;
        for(i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                sorted = false;
                break;
            }
        }
        if(sorted)
            cout << n << endl;
        else
            cout << 1 << endl;
    }
}