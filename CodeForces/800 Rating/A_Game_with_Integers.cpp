#include<bits/stdc++.h>
using namespace std;
void count (vector <long long> &num, long long i)
{
    if (num[i] % 3 == 0)
    {
        cout<<"Second"<<endl;
    }
    else if ((((num[i] + 1) % 3) == 0) || (((num[i] - 1) % 3) == 0))
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long test, i, x;
    cin>>test;
    vector <long long> num;
    for (i = 0; i < test; i++)
    {
        cin>>x;
        num.push_back(x);
        count (num, i);
    }
    return 0;
}