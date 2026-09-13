#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <long long>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, x, mini, m, n, o, j;
    vll a, b (3), c, d, e;
    cin>>t;
    for (i = 0; i < t; i++)
    {
        cin>>x;
        a.push_back(x);
        if (x == 1)
        {
            b[0]++;
        }
        else if (x == 2)
        {
            b[1]++;
        }
        else
        {
            b[2]++;
        }
    }
    if ((b[0] == 0) || (b[1] == 0) || (b[2] == 0))
    {
        cout<<"0";
    }
    else
    {
        mini = *min_element (b.begin(), b.end()); 
        for (i = 0; i < a.size(); i++)
        {
            if ((a[i] == 1) && (c.size() != mini))
            {
                c.push_back(i + 1); 
            }
            else if ((a[i] == 2) && (d.size() != mini))
            {
                d.push_back(i + 1);
            }
            else if ((a[i] == 3) && (e.size() != mini))
            {
                e.push_back(i + 1);
            }
        }
        cout<<mini<<"\n";
        for (i = 0; i < mini; i++)
        {
            cout<<c[i]<<" "<<d[i]<<" "<<e[i]<<"\n";
        }
    }
}