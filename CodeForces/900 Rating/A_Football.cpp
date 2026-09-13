#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, s1 = "1111111", s0 = "0000000";
    cin>>s;
    if ((s.find(s1) != string::npos) || (s.find(s0) != string::npos))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}