#include<bits/stdc++.h>
using namespace std;
int test(int &w)
{
    if ((w == 2) || (w % 2 != 0))
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int we, judge;
    cin>>we;
    judge = test(we);
    if (judge == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}