#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a[3], i, row, col, stone;
    for (i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    row = (a[0] + a[2] - 1) / a[2];
    col = (a[1] + a[2] - 1) / a[2];
    stone = row * col;
    cout<<stone;
    return 0;
}