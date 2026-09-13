#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n, i, recruit = 0, crime = 0;
    cin>>n;
    long long a[n];
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] < 0)
        {
            ++crime;
            if (recruit != 0)
            {
                --recruit;
                --crime;
            }
        }
        else
        {
            recruit += a[i];
        }
    }
    cout<<crime;
}