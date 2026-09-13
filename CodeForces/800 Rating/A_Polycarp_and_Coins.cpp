#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t, a, b, n, i, counter;
    cin>>t;
    while (t--)
    {
        counter = 0;
        cin>>n;
        a = n / 3;
        b = a;
        for (i = 0; 1; i++)
        {
            if (((a * 1) + (b * 2)) == n)
            {
                break;
            }
            else
            {
                if ((counter % 2) == 0)
                {
                    a++;
                }
                else
                {
                    a--;
                    b++;
                }
                counter++;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
}