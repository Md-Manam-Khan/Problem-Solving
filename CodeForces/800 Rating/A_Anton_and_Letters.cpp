#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long i, n, v, a[26];
    for (i = 0; i < 26; i++)
    {
        a[i] = -1;
    }
    string x;
    getline (cin, x);
    n = x.length();
    for (i = 0; i < n; i++)
    {
        if ((x[i] >= 'a') && (x[i] <= 'z'))
        {
            v = ((int)x[i]) - 97;
            a[v] = 1;
        }
    }
    n = 0;
    for (i = 0; i < 26; i++)
    {
        if (a[i] == 1)
        {
            n++;
        }
    }
    cout<<n;
    return 0;
}