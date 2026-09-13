#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int pr1, pr2, pra1, pra2;
    double prp1, prp2, tot;
    cin>>pr1>>pra1>>prp1;
    cin>>pr2>>pra2>>prp2;
    tot = (pra1 * prp1) + (pra2 * prp2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<tot<<endl;
    return 0;
}