#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i;
    double sum = 0, percent;
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    percent = sum / n;
    cout<<fixed<<setprecision(12)<<percent;
}