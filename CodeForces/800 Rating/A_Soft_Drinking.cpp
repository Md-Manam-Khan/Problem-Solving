#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i, n, k, l, c, d, p, nl, np, toast, checker[3];
    cin>> n >> k >> l >> c >> d >> p >> nl >> np;
    checker[0] = (c * d);
    checker[1] = (k * l) / nl;
    checker[2] = p / np;
    toast = (*min_element (checker, checker + 3)) / n;
    cout<<toast;
    return 0;
    
}