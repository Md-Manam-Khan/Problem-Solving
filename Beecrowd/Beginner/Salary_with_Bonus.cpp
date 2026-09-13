#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    getline(cin,x);
    double salary, sold;
    cin>>salary>>sold;
    double Total = (salary + ((sold * 15) / 100));
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<Total<<endl;
}