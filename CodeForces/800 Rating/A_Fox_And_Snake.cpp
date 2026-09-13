#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long m, n, i, j, x = 1;
    cin>>m>>n;
    for (i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j++)
            {
                cout<<"#";
            }
        }
        else
        {
            if (x % 2 == 1)
            {
                for (j = 0; j < n; j++)
                {
                if (j == n - 1)
                    {
                    cout<<"#";
                    }
                else
                    {
                    cout<<".";
                    }
                }
            }
            else
            {
                for (j = 0; j < n; j++)
                {
                    if (j == 0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
                } 
            }
            x++;
        }
        cout<<endl;
    }
}