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
    umpstr m;
    m[61] = "Brasilia";
    m[71] = "Salvador";
    m[11] = "Sao Paulo";
    m[21] = "Rio de Janeiro";
    m[32] = "Juiz de Fora";
    m[19] = "Campinas";
    m[27] = "Vitoria";
    m[31] = "Belo Horizonte";
    cin>>x;
    if (m.find(x) != m.end())
    {
        cout<<m[x]<<"\n";
    }
    else
    {
        cout<<"DDD nao cadastrado\n";
    }
    return 0;
}