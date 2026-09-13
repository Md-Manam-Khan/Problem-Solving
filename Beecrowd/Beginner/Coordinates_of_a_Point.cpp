#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a, b;
    cin >> a >> b;
    if ((a == 0.0) && (b == 0.0))
    {
        cout << "Origem" << endl;
    }
    else if (a == 0.0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (b == 0.0)
    {
        cout << "Eixo X" << endl;
    }
    else if (a > 0.0)
    {
        if (b > 0.0)
            cout << "Q1" << endl;
        else
            cout << "Q4" << endl;
    }
    else
    {
        if (b > 0.0)
            cout << "Q2" << endl;
        else
            cout << "Q3" << endl;
    }
    return 0;
}