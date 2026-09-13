#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    double b;
    cin>>a>>b;
    double lar = (a / b);
    cout<<fixed<<setprecision(3);
    cout<<lar<<" km/l"<<endl;
    return 0;
}