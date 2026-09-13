#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, a = 0, d = 0;
    string s;
    cin>>n;
    cin>>s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a == d)
    {
        cout<<"Friendship";
    }
    else if (a > d)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
    return 0;
}