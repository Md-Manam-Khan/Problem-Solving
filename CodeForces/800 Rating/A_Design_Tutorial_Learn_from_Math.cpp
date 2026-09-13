#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void isPrime(ll &a, ll &b)
{
    ll i, j = 0, k = 0;
    for (i = 1; i <= a; i++)
    {
        if ((a % i) == 0)
        {
            j++;
        }
    }
    for (i = 1; i <= b; i++) 
    {
        if ((b % i) == 0)
        {
            k++;
        }
    }
    if (j == 2)
    {
        a += 2;
        b -= 2;
        isPrime (a, b);
    }
    else if (k == 2)
    {
        b += 2;
        a -= 2;
        isPrime (a, b);
    }
    else
    {
        return;
    }
}
int main ()
{
    ll n, i, a, b;
    cin>> n;
    if ((n % 2) == 0)
    {
        a = n / 2;
        b = a;
        if ((a % 2) == 0)
        {
            cout<<a<<" "<<b;
        }
        else
        {
            a += 1;
            b -= 1;
            cout<<a<<" "<<b;
        }
    }
    else
    {
        a = n / 2;
        b = a + 1;
        isPrime (a, b);
        cout<<b<<" "<<a;
    }
}