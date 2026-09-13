#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n;
    int i, j, luck = 0;
    string s;
    cin>>n;
    s = to_string (n);
    j = s.length();
    for (i = 0; i < j; i++)
    {
        if ((s[i] == '4') || (s[i] == '7'))
        {
            luck++;
        }
    }
    if ((luck == 4) || (luck == 7))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}