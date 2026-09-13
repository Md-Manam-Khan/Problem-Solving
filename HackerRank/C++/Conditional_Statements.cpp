#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    if (n > 9)
    {
        cout<<"Greater than 9";
    }
    else
    {
        switch(n)
        {
            case 1:
            {
                cout<<"one";
                break;
            }
            case 2:
            {
                cout<<"two";
                break;
            }
            case 3:
            {
                cout<<"three";
                break;
            }
            case 4:
            {
                cout<<"four";
                break;
            }
            case 5:
            {
                cout<<"five";
                break;
            }
            case 6:
            {
                cout<<"six";
                break;
            }
            case 7:
            {
                cout<<"seven";
                break;
            }
            case 8:
            {
                cout<<"eight";
                break;
            }
            case 9:
            {
                cout<<"nine";
                break;
            }
            default:
            {
                ;
            }
        }
    }
}