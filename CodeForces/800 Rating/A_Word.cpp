#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int a, i, low = 0, high = 0;
    cin>>s;
    a = s.length();
    for (i = 0; i < a; i++)
    {
        if (s[i] == tolower(s[i]))
        {
            low++;
        }
        else if (s[i] == toupper(s[i]))
        {
            high++;
        }
    }
    if ((low == high) || (low > high))
    {
        for (i = 0; i < a; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s;
}