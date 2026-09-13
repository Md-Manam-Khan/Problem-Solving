#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double salary, rate;
    cin >> salary;
    if (salary <= 400.00)
    {
        rate = 15.0;
    }
    else if (salary <= 800.00)
    {
        rate = 12.0;
    }
    else if (salary <= 1200.00)
    {
        rate = 10.0;
    }
    else if (salary <= 2000.00)
    {
        rate = 7.0;
    }
    else
    {
        rate = 4.0;
    }
    double increase = salary * rate / 100.0;
    double new_salary = salary + increase;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << increase << endl;
    cout << "Em percentual: " << (int)rate << " %" << endl;
    return 0;
}