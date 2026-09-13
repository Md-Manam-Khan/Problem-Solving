#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x;
    cin>>x;
    int a = x * 100;
    int x1 = a / 10000;
    a = a % 10000; 
    int x2 = a / 5000;
    a = a % 5000;
    int x3 = a / 2000;
    a = a % 2000;
    int x4 = a / 1000;
    a = a % 1000;
    int x5 = a / 500; 
    a = a % 500; 
    int x6 = a / 200;
    a = a % 200;
    cout<<"NOTAS:"<<endl;
    cout<<x1<<" nota(s) de R$ 100.00"<<endl;
    cout<<x2<<" nota(s) de R$ 50.00"<<endl;
    cout<<x3<<" nota(s) de R$ 20.00"<<endl;
    cout<<x4<<" nota(s) de R$ 10.00"<<endl;
    cout<<x5<<" nota(s) de R$ 5.00"<<endl;
    cout<<x6<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    int x7 = a / 100;
    a = a % 100;
    int x8 = a / 50;
    a = a % 50;
    int x9 = a / 25;
    a = a % 25;
    int x10 = a / 10;
    a = a % 10;
    int x11 = a / 5;
    a = a % 5;
    cout<<x7<<" moeda(s) de R$ 1.00"<<endl;
    cout<<x8<<" moeda(s) de R$ 0.50"<<endl;
    cout<<x9<<" moeda(s) de R$ 0.25"<<endl;
    cout<<x10<<" moeda(s) de R$ 0.10"<<endl;
    cout<<x11<<" moeda(s) de R$ 0.05"<<endl;
    cout<<a<<" moeda(s) de R$ 0.01"<<endl;
}