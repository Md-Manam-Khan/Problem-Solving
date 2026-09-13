#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, k, i;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (k >= 2)
        {
            cout<<"YES\n";
        }
        else if (k == 1)
        {
            long long b[n];
            for (i = 0; i < n; i++)
            {
                b[i] = a[i];
            }
            sort(a, a + n);
            for (i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    cout<<"NO\n";
                    break;
                }
            }
            if (i == n)
            {
                cout << "YES\n";     
            }
        }
    }
    return 0;
}