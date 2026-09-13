#include<iostream>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, n, t;
    cin>>t;
    while (t--)
    {
        cin>>a;
        n = a % 10;
        a /= 10;
        cout<< a + n <<"\n";
    }
}