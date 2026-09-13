#include<bits/stdc++.h>
using namespace std;
int a, b, i;
void verdict (int a, int b)
{
    for (i = 1; i <= 10; i++)
    {
        a*=3;
        b*=2;
        if (a > b)
        {
            break;
        }
    }
    cout<<i;
}
int main ()
{
    cin>>a>>b;
    verdict(a, b);
}