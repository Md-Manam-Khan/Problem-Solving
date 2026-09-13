#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i, problem, distance, time = 0, remain, hour = 4 * 60;
    cin>>problem>>distance; //3 222
    for (i = 1; i <= problem; i++)
    {
        time += 5 * i;
        remain = hour - time; 
        if (remain < distance)
        {
            break;
        }
    }
    time = i - 1;
    cout<<time;
}