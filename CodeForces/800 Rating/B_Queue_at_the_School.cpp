#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m, i, j;
    cin>>n>>m;
    string s;
    cin>>s;
    for (j = 0; j < m; j++)
    {
        i = 0;
        while (1)
        {
            if (i >= n)
            {
                break;
            }
            else if ((s[i] == 'B') && (s[i+1] == 'G'))
            {
                swap(s[i], s[i+1]);
                i+=2;
            }
            else
            {
                i += 1;
            }
        }
    }
    cout<<s;
}