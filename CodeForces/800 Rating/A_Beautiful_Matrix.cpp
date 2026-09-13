#include<bits/stdc++.h>
using namespace std;
int beautify(int a[5][5])
{
    int row, col, i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    k = abs(row - 2) + abs(col - 2);
    return k;
}
int main ()
{
    int i, j, a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
    }
    if (a[2][2] != 1)
    {
        i = beautify(a);
        cout<<i;
    }
    else
    {
        cout<<0;
    }
}