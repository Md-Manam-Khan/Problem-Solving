#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
int main()
{
    ios::sync_with_stdio (false);
    cin.tie (0);
    ll n, t, i, c = 0, m, j;
    cin>>n>>m;
    vector <vc> v(n, vc (m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin>> v[i][j];
            if ((v[i][j] == 'C') || (v[i][j] == 'M') || (v[i][j] == 'Y'))
            {
                c++;
            }
        }
    }
    if (c != 0)
    {
        cout<<"#Color";
    }
    else
    {
        cout<<"#Black&White";
    }
}