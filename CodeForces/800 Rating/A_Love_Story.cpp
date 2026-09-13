#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    string a = "codeforces", b;
    ll i, n, j;
    cin>>n;
    while (n--)
    {
        j = 0;
        cin>>b;
        for (i = 0; i < 10; i++)
        {
            if (a[i] != b[i])
            {
                j++;
            }
        }
        cout<<j<<"\n";
    }
}