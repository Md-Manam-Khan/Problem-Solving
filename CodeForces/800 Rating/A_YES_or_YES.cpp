#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long i, a, j;
    cin>>a;
    long long m[a];
    string x;
    for (i = 0; i < a; i++)
    {
        cin>>x;
        for (j = 0; j < 3; j++)
        {
            x[j] = tolower (x[j]);
        }
        if (x == "yes")
        {
            m[i] = 1;
        }
        else
        {
            m[i] = 0;
        }
    }
    for (i = 0; i < a; i++)
    {
        if (m[i] == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}