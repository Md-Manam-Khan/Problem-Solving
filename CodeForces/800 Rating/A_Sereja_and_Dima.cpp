#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n, i = 0;
    cin>>n;
    long long a[n], last = n, first = 0, ssize, dsize, stotal = 0, dtotal = 0;
    vector <long long> s;
    vector <long long> d;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (i = 0; i < n; i++)
    {
        if ((i % 2) == 0)
        {
            if (a[first] < a[last - 1])
            {
                s.push_back(a[last - 1]);
                --last;
            }
            else
            {
                s.push_back(a[first]);
                ++first;
            }
        }
        else
        {
            if (a[first] < a[last - 1])
            {
                d.push_back(a[last - 1]);
                --last;
            }
            else
            {
                d.push_back(a[first]);
                ++first;
            }
        }
    }
    ssize = s.size();
    dsize = d.size();
    for (i = 0; i < ssize; i++)
    {
        stotal += s[i];
    }
    for (i = 0; i < dsize; i++)
    {
        dtotal += d[i];
    }
    cout<<stotal<<" "<<dtotal;
    return 0;
}