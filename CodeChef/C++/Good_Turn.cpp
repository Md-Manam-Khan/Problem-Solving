#include <iostream>
using namespace std;
using ll = long long;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if ((a + b) > 6)
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
