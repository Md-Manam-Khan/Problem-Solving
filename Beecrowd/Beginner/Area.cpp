#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c;
    cin>>a>>b>>c;
    double tri = 0.5 * a * c;
    double cir = 3.14159 * c * c;
    double tra = ((a + b) / 2) * c;
    double sq = b * b;
    double rec = a * b;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<tri<<"\nCIRCULO: "<<cir<<"\nTRAPEZIO: "<<tra;
    cout<<"\nQUADRADO: "<<sq<<"\nRETANGULO: "<<rec;
    return 0;
}