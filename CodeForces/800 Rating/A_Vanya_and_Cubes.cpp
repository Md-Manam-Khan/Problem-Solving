#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio (false);
    cin.tie (0);
    ll sum = 0, n, i, total = 0, counter = 0;
    cin>>n;
    for (i = 1; 1; i++)
    {
        sum += i; 
        total += sum;
        if (total <= n)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    cout<<counter;
}