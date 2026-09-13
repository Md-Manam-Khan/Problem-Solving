#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int x1 = a / 365;
    a = a % 365;
    int x3 = a / 30;
    int x4 = a % 30;
    cout<<x1<<" ano(s)\n"<<x3<<" mes(es)\n"<<x4<<" dia(s)\n";
}