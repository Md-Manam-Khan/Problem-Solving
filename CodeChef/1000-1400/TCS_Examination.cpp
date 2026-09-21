#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i, x1, x2, x3, t1, t2, y1, y2, y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>x2>>x3;
        t1 = x1 + x2 + x3;
        cin>>y1>>y2>>y3;
        t2 = y1 + y2 + y3;
        if (t1 > t2)
        {
            cout<<"DRAGON\n";
        }
        else if (t1 < t2)
        {
            cout<<"SLOTH\n";
        }
        else
        {
            if (x1 > y1)
            {
                cout<<"DRAGON\n";
            }
            else if (x1 < y1)
            {
                cout<<"SLOTH\n";
            }
            else
            {
                if (x2 > y2)
                {
                    cout<<"DRAGON\n";
                }
                else if (x2 < y2)
                {
                    cout<<"SLOTH\n";
                }
                else
                {
                    cout<<"TIE\n";
                }
            }
        }
    }
}