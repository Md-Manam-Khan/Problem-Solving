#include<iostream>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    char c;
    cin>>t;
    while (t--)
    {
        cin>>c;
        if ((c == 'c') || (c == 'o') || (c == 'd') || (c == 'e') || (c == 'f') || (c == 'o') || (c == 'r') || (c == 's'))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}