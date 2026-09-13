#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t, i, n = 0, x1, x2, x3, x4, count;
    string s;
    cin>>t;
    long long a[t];
    for (i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    while (n < t)
    {
        count = 0;
        if (((a[n] <= 10)) || (a[n] == 100) || (a[n] == 1000) || (a[n] == 10000))
        {
            count = 1;
            cout<<count<<endl<<a[n]<<endl;
        }
        else if ((a[n] > 10) && (a[n] < 100)) //44 40
        {
            s = to_string (a[n]);
            if (s[1] != '0')
            {
                x1 = a[n] % 10; //4
                a[n] = a[n] - x1; //40
                count = 2;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else
            {
                count = 1;
                cout<<count<<endl<<a[n]<<" "<<endl;
            }
        }
        else if ((a[n] > 100) && (a[n] < 1000))
        {
            s = to_string (a[n]);
            if ((s[1] == '0') && (s[2] != '0'))
            {
                x1 = a[n] % 100;
                a[n] = a[n] - x1;
                count = 2;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else if ((s[1] == '0') && (s[2] == '0'))
            {
                count = 1;
                cout<<count<<endl<<a[n]<<endl;
            }
            else if (s[2] == '0') 
            {
                count = 2;
                x1 = a[n] % 100;
                a[n] = a[n] - x1;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else
            {
                x1 = a[n] % 100;
                x2 = a[n] - x1;
                a[n] = x1 % 10;
                x3 = x1 - a[n];
                count = 3;
                cout<<count<<endl<<x2<<" "<<x3<<" "<<a[n]<<endl;
            } 
        }
        else if ((a[n] > 1000) && (a[n] < 10000))
        {
            s = to_string (a[n]);
            if ((s[1] == '0') && (s[2] == '0') && (s[3] == '0'))
            {
                count = 1;
                cout<<count<<endl<<a[n]<<endl;
            }
            else if ((s[1] == '0') && (s[2] == '0'))
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                count = 2;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else if ((s[2] == '0') && (s[3] == '0'))
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                count = 2;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else if ((s[1] == '0') && (s[3] == '0'))
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                count = 2;
                cout<<count<<endl<<a[n]<<" "<<x1<<endl;
            }
            else if (s[1] == '0')
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                x2 = x1 % 10;
                x1 = x1 - x2;
                count = 3;
                cout<<count<<endl<<a[n]<<" "<<x1<<" "<<x2<<endl;
            }
            else if (s[2] == '0')
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                x2 = x1 % 100;
                x1 = x1 - x2;
                count = 3;
                cout<<count<<endl<<a[n]<<" "<<x1<<" "<<x2<<endl;
            }
            else if (s[3] == '0')
            {
                x1 = a[n] % 1000;
                a[n] = a[n] - x1;
                x2 = x1 % 100;
                x1 = x1 - x2;
                count = 3;
                cout<<count<<endl<<a[n]<<" "<<x1<<" "<<x2<<endl;
            }
            else
            { 
                x1 = a[n] % 1000;
                x2 = a[n] - x1;
                x4 = x1 % 100;
                a[n] = x1 - x4;
                x3 = x4 % 10;
                x1 = x4 - x3;
                count = 4;
                cout<<count<<endl<<x2<<" "<<a[n]<<" "<<x1<<" "<<x3<<endl;
            }
        }
        n++;
    }
    return 0;
}