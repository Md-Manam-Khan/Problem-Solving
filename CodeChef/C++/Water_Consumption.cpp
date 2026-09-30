#include <iostream>
using namespace std;
using ll = long long;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if (a >= 2000)
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