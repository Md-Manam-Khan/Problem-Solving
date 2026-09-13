#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, x, i, j;
    cin>>t;
    while (t--)
    {
        char c [10][10];
        x = 0;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                cin>>c[i][j];
                if (c[i][j] == 'X')
                {
                    if (((i == 0) || (i == 9)) || ((j == 0) || (j == 9)))
                    {
                        x+=1;
                    }
                    else if (((i == 1) || (i == 8)) || ((j == 1) || (j == 8)))
                    {
                        x+=2;
                    }
                    else if (((i == 2) || (i == 7)) || ((j == 2) || (j == 7)))
                    {
                        x+=3;
                    }
                    else if (((i == 3) || (i == 6)) || ((j == 3) || (j == 6)))
                    {
                        x+=4;
                    }
                    else
                    {
                        x+=5;
                    }
                }
            }
        }
        cout<<x<<"\n";
    }
}