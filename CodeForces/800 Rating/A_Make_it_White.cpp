#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vll = vector <ll>;
using vc = vector <char>;
using sll = set <ll>;
using mll = multiset <ll>;
using pll = pair <ll, ll>;
#define all(x) x.begin(),x.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x, i, j, n, t, counter, counter2, counter3;
    char c;
    bool b;
    cin>>t;
    while(t--)
    {
        counter = 0;
        counter3 = 0;
        vc a;
        b = false;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>c;
            a.push_back(c);
            if ((c == 'B') && (counter3 == 0))
            {
                counter = i;
                counter3 = 1;
            }
            if ((i == (n - 1)) && (a[i] == 'B'))
            {
                b = true;
            }
        }
        if (b)
        {
            counter = n - counter;
        }
        else
        {
            counter2 = 0;
            for (i = n - 1; i >= 0; i--)
            {
                if (a[i] == 'W')
                {
                    ++counter2;
                }
                else
                {
                    break;
                }
            }
            counter = n - counter - counter2;
        }
        cout<<counter<<"\n";
    }
    return 0;
}