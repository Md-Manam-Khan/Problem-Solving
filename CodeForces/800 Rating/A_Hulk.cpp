#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout<<"I hate";
            if ((n == 1) || (i == n))
            {
                cout<<" it";
            }
            else
            {
                cout<<" that ";
            }
        }
        else
        {
            cout<<"I love";
            if (i == n)
            {
                cout<<" it";
            }
            else
            {
                cout<<" that ";
            }
        }
    }
}