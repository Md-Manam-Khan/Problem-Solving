#include<bits/stdc++.h>
using namespace std;
int intake (char a[])
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    if (((a[0] == 'X') || (a[0] == '+')) && (a[1] == '+') && ((a[2] == '+') || (a[2] == 'X')))
    {
        return 1;
    }
    else if (((a[0] == 'X') || (a[0] == '-')) && (a[1] == '-') && ((a[2] == '-') || (a[2] == 'X')))
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char a[3];
    int n, i, b = 0;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        b = b + intake(a);
    }
    cout<<b;
}