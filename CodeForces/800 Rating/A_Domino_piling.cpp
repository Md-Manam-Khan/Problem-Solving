#include<bits/stdc++.h>
using namespace std;
int judge (int a, int m, int n)
{
    int b = m * n;
    return b / a;
}
int main()
{
    int M, N, a = 2, x;
    cin>>M>>N;
    x = judge (a, M, N);
    cout<<x;
}