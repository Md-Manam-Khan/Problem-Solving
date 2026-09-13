#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, i = 0;
    string x;
    cin>>x;
    n = x.length();
    while (i < n)
    {
        if (x[i] == '.')
        {
            cout<<"0";
            i++;
        }
        else
        {
            if (x[i + 1] == '.')
            {
                cout<<"1";
                i+=2;
            }
            else
            {
                cout<<"2";
                i+=2;
            }
        }
    }
}