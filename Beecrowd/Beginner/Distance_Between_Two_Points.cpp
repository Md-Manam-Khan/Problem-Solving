#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    double lar = sqrt(((c - a) * (c - a)) + ((d - b)* (d - b)));
    cout<<fixed<<setprecision(4);
    cout<<lar<<endl;
    return 0;
}