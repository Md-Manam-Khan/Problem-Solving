#include<bits/stdc++.h>
using namespace std;
int main ( )
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin>>x;
    long long n, i;
    n = x.length();
    string y = "";
    for (i = 0; i < n; i++)
    {
        x[i] = tolower (x[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u')
        {
            y.push_back('.');
            y.push_back(x[i]);
        }
    }
    n = y.length();
    for (i = 0; i < n; i++)
    {
        cout<<y[i];
    }
    return 0;
}