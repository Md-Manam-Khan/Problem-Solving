#include<bits/stdc++.h>
using namespace std;
int god (int s[], int i)
{
    int z = s[0]+s[1]+s[2];
    if (z >= 2)
    {
        return i;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int p, i, j, x, t = 0, s[3];
    cin>>p; 
    for (i=1; i<=p; i++)
    {
        for (j=0; j<3; j++)
        {
            cin>>s[j];  // 1 0 2
        }
        x = god (s, i);
        if (x == i)
        {
            t++;
        }
    }
    cout<<t;
    return 0;
}