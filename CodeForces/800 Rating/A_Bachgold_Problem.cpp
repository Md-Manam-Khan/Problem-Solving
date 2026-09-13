#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, i;
    cin >> n;
    cout << n / 2 << "\n";
    if(n % 2 == 0)
    {
        for(i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }   
    }
    else
    {
        for(i = 0; i < (n - 3) / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
    return 0;
}