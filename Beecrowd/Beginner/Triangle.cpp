#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        double perimeter = a + b + c;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimeter << endl;
    }
    else
    {
        double area = ((a + b) * c) / 2.0;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
    return 0;
}