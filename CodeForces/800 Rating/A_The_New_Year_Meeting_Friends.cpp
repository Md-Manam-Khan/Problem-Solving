#include<bits/stdc++.h>
using namespace std;
void judge (long long a, long long b, long long c)
{
    long long d, e, f;
    d = min (abs (a - b) + abs (a - c), min (abs (a - c) + abs (b - c), abs (b - c) + abs (a - b)));
    cout<<d;
}
int main ()
{
    long long a, b, c;
    cin>>a>>b>>c;
    judge (a, b, c);
    return 0;
}