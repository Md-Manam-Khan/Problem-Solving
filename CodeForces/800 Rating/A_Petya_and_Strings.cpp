#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a, b;
    int i, n;
    cin>>a>>b;
    n = a.length();
    for (i = 0; i < n; i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout<<"-1";
            break;
        }
        else if (a[i] > b[i])
        {
            cout<<"1";
            break;
        }
        else if (a == b)
        {
            cout<<"0";
            break;
        }
    }
}