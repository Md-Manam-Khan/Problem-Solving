#include<bits/stdc++.h>
using namespace std;
void judge (string x, string y, string z, long long m[])
{
    long long a, b, c, i, j, count1 = 0, count2 = 0;
    a = x.length();
    b = y.length();
    c = z.length();
    if ((a + b > c) || (a + b < c))
    {
        cout<<"NO";
        return;
    }
    else
    {
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < a; j++)
            {
                if (x[j] == z[i])
                {
                    count1++;
                }
            }
            for (j = 0; j < b; j++)
            {
                if (y[j] == z[i])
                {
                    count1++;
                }
            }
            for (j = 0; j < c; j++)
            {
                if (z[j] == z[i])
                {
                    count2++;
                }
            }
            if (count1 != count2)
            {
            cout<<"NO";
            return;
            }
        }
            cout<<"YES";
    }

}
int main ()
{
    string x, y, z;
    long long i, m[26];
    for (i = 0; i < 26; i++)
    {
        m[i] = -1;
    }
    cin>>x>>y>>z;
    judge (x, y, z, m);
}