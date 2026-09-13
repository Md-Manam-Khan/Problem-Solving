#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    double vol = (4.0 / 3.0) * 3.14159 * a * a * a;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<vol<<endl;
    return 0;
}