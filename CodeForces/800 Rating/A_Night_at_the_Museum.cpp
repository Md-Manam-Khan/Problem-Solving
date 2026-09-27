#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    cin>>x;
    int i, ClockDist, AClockDist, rotation = 0, minimum, y = 97, z, n = x.length();
    for (i = 0; i < n; i++)
    {
        z = (int)x[i];
        ClockDist = abs (z - y);
        AClockDist = abs (26 - ClockDist);
        minimum = min (ClockDist, AClockDist);
        rotation = rotation + minimum;
        y = z;
    }
    cout<<rotation;
}