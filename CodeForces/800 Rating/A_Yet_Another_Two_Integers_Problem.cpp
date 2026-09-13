#include<iostream>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, i, a, b, c, d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a == b)
        {
            cout<<"0\n";
        }
        else
        {
            c = abs(b - a);
            if (c <= 10)
            {
                cout<<"1\n";
            }
            else
            {
                d = c / 10;
                c = c % 10;
                {
                    if (c == 0)
                    {
                        cout<<d<<"\n";
                    }
                    else
                    {
                        ++d;
                        cout<<d<<"\n";
                    }
                }
            }
        }
    }
}