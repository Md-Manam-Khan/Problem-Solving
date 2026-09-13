#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin>>a>>b;
    double c = (a * b) / 12.0;
    cout<<fixed<<setprecision(3)<<c<<endl;
    return 0;
}