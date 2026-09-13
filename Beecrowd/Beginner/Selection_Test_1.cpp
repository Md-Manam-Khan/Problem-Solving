#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if ((b > c) && (d > a) && ((c + d) > (a + b)) && ((c + d) > 0) && ((a % 2) == 0))
    {
        cout<<"Valores aceitos\n";
    }
    else
    {
        cout<<"Valores nao aceitos\n";
    }
}