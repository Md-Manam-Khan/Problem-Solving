#include<bits/stdc++.h>
using namespace std;
void check (string &x)
{
    if ((x[0] + x[1] + x[2]) == (x[3] + x[4] + x[5]))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i = 0, t;
    string v;
    cin >> t;
    while (i < t)
    {
        cin >> v;
        check(v);
        i++;
    }
}