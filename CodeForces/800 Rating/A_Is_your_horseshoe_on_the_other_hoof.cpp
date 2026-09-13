#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s1, s2, s3, s4, i, j, s[4], unique = 0;
    cin>>s1>>s2>>s3>>s4;
    s[0] = s1;
    s[1] = s2;
    s[2] = s3;
    s[3] = s4;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (s[i] > s[j])
            {
                swap (s[i], s[j]);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (s[i] == s[i+1])
        {
            unique++;
        }
    }
    cout<<unique;
}