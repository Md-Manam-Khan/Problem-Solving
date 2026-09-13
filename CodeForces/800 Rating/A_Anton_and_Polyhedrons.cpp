#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, faces = 0;
    string x;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cin>>x;
        if (x[0] == 'T')
        {
            faces += 4;
        }
        else if (x[0] == 'C')
        {
            faces += 6;
        }
        else if (x[0] == 'O')
        {
            faces += 8;
        }
        else if (x[0] == 'D')
        {
            faces += 12;
        }
        else
        {
            faces += 20;
        }
    }
    cout<<faces;
}