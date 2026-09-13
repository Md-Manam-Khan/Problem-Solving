#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int  i, n;
    string s1, s2, s3;
    cin>>s1;
    cin>>s2;
    n = s1.length();
    s3.resize(n);
    for (i = 0; i < n; i++)
    {
        if(s1[i] == s2[i])
        {
            s3[i] = '0';
        }
        else
        {
            s3[i] = '1';
        }
    }
    cout<<s3;
}