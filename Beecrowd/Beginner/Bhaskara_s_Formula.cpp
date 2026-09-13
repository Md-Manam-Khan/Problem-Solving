#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if (a == 0 || delta < 0) 
    {
        cout << "Impossivel calcular" << endl;
    } 
    else 
    {
        double r1 = (-b + sqrt(delta)) / (2*a);
        double r2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }
    return 0;
}