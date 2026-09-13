#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, hour;
    cin >> a >> b;
    if (a == b)
    {
        hour = 24;
    }
    else if (b > a)
    {
        hour = b - a;
    }
    else
    {
        hour = 24 - a + b;
    }
    cout << "O JOGO DUROU " << hour << " HORA(S)" << endl;
    return 0;
}