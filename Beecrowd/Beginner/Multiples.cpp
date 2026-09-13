#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    if ((a % b == 0) || (b % a == 0))
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}