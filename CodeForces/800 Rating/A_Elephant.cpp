#include <bits/stdc++.h>
using namespace std;
int main () 
{
    int x, step;
    cin >> x; //12
    step = x / 5; //12/5 = 2
    if (x % 5 != 0) 
    step++; //3
    cout << step;
    return 0;
}