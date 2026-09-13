#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int x1 = a / 3600;
    a = a % 3600;
    int x3 = a / 60;
    int x4 = a % 60;
    cout<<x1<<":"<<x3<<":"<<x4<<endl;
}