#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Hour, NUMBER;
    float amountPerHour, SALARY;
    cin>>NUMBER;
    cin>>Hour;
    cin>>amountPerHour;
    SALARY = amountPerHour * Hour;
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<endl;
    return 0;
}