#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> x = {a, b, c};
    sort(x.rbegin(), x.rend());
    a = x[0];
    b = x[1];
    c = x[2];
    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (a * a == b * b + c * c)
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if (a * a > b * b + c * c)
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if (a == b || a == c || b == c)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}