#include<bits/stdc++.h>
using namespace std;
void collection (long long &k, long long &l, long long &m, long long &n, long long &d)
{
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    return;
}
void result (long long k, long long l, long long m, long long n, long long d)
{
    int total = 0;
    for (int i = 1; i <= d; i++)
    {
        if ((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
        {
            total++;
        }
    }
    cout<<total;
}
int main ()
{
    long long k, l, m, n, d;
    collection (k, l, m, n, d);
    result(k, l, m, n, d);
    return 0;
}