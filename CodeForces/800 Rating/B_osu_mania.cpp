#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vc = vector <char>;
using vll = vector <ll>;
int main ()
{
    ll  n, i, x, t, j;
    char c;
    cin>>t;
    while (t--)
    {
        vll b;
        vc a;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 4; j++)
            {
                cin>>c;
                a.push_back(c);
                if (c == '#')
                {
                    b.push_back(j + 1);
                }
            }
        }
        for(i = b.size() - 1; i >= 0; i--)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}