#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    cout<<a<<endl;
    int x1 = a / 100;
    a = a % 100; 
    int x2 = a / 50;
    a = a % 50;
    int x3 = a / 20;
    a = a % 20;
    int x4 = a / 10;
    a = a % 10;
    int x5 = a / 5; 
    a = a % 5; 
    int x6 = a / 2;
    a = a % 2;
    cout<<x1<<" nota(s) de R$ 100,00"<<endl;
    cout<<x2<<" nota(s) de R$ 50,00"<<endl;
    cout<<x3<<" nota(s) de R$ 20,00"<<endl;
    cout<<x4<<" nota(s) de R$ 10,00"<<endl;
    cout<<x5<<" nota(s) de R$ 5,00"<<endl;
    cout<<x6<<" nota(s) de R$ 2,00"<<endl;
    cout<<a<<" nota(s) de R$ 1,00"<<endl;
}