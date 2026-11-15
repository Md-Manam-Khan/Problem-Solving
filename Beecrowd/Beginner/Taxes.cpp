#pragma GCC optimize("O3,Ofast,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
using vll = vector <ll>;
using vc = vector <char>;
using vstr = vector <str>;
using pll = pair <ll, ll>;
using sll = set <ll>;
using usll = unordered_set <ll>;
using mll = multiset <ll>;
using mpll = map <ll, ll>;
using umpll = unordered_map <ll, ll>;
using umpstr = unordered_map <ll, str>;
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define in insert
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t, x, n, i, j, k, total, sum, even, odd, count;
    ld d, y;
    str s;
    char c;
    bool found;
    cin>>d;
    if (d <= 2000)
    {
        cout<<"Isento\n";
    }
    else
    {
        y = 0;
        if (d > 4500)
        {
            y += (d - 4500) * 0.28;
            d = 4500;
        }
        if (d > 3000)
        {
            y += (d - 3000) * 0.18;
            d = 3000;
        }
        if (d > 2000)
        {
            y += (d - 2000) * 0.08;
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<y<<"\n";
    }
    return 0;
}