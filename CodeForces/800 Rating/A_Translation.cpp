#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s, t;
    int n, i = 0, j, correct = 0, c;
    cin>>s;
    cin>>t;
    n = s.length();
    c = t.length();
    if (n != c)
    {
        cout<<"NO";
        return 0;
    }
    j = n - 1;
    char x[n];
    while (1)
    {
        x[j] = s[i];
        if (i == n - 1)
        {
            break;
        }
        i++;
        j--;
    }
    for (i = 0; i< n; i++)
    {
        if (t[i] == x[i])
        {
            correct++;
        }
    }
    if (correct == n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}