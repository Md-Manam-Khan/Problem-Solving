#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops,no-stack-protector")
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
#define vec vector
#define fi first
#define se second
#define pf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back
#define ins insert
#define sz(x) ((ll)(x).size())
#define all(x) (x).begin(),(x).end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
using vll = vec <ll>;
using vvll = vec <vector <ll>>;
using vc = vec <char>;
using vstr = vec <str>;
using lll = list <ll>;
using pll = pair <ll, ll>;
using pc = pair <ll, char>;
using pstr = pair <ll, str>;
using sll = set <ll>;
using sc = set <char>;
using mll = multiset <ll>;
using mc = multiset <char>;
using usll = unordered_set <ll>;
using usc = unordered_set <char>;
using mpll = map <ll, ll>;
using mpc = map <ll, char>;
using mpstr = map <ll, str>;
using umpll = unordered_map <ll, ll>;
using umpc = unordered_map <ll, char>;
using umpstr = unordered_map <ll, str>;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll testCases, n, x, i, j, k;
    ll total = 0, sum = 0, cnt = 0, even = 0, odd = 0;
    ld d, y, z;
    char c, c1, c2;
    str s, s1, s2;
    bool found = false, seen = false, truth = false, fauc = false, drn = false;
    cin>>n>>x;
    char a[n][x];
    j = 0;
    for (i = 0; i < n; i++)
    {
        cin>>s;
        for (; j < n; j++)
        {
            for (k = 0; k < x; k++)
            {
                a[j][k] == s[k];
            }
        }
        ++j;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (a[i][j] == 'x')
            {
                if ((i == 0) && (j == 0))
                {
                    if (a[i][j + 1] == 'x')
                    {
                        cnt = 1;
                        fauc = true;
                        total = i + 1;
                        break;
                    }
                    else if (a[i + 1][j] == 'x')
                    {
                        cnt = 1;
                        drn = true;
                        total = j + 1;
                        break;
                    }
                }
                if ((i == 0) && (j == (x - 1)))
                {
                    if (a[i][j - 1] == 'x')
                    {
                        cnt = 1;
                        fauc = true;
                        total = i + 1;
                        break;
                    }
                    else if (a[i + 1][j] == 'x')
                    {
                        cnt = 1;
                        drn = true;
                        total = j + 1;
                        break;
                    }
                }
                if ((i == (n - 1)) && (j == 0))
                {
                    if (a[i][j + 1] == 'x')
                    {
                        cnt = 1;
                        fauc = true;
                        total = i + 1;
                        break;
                    }
                    else if (a[i - 1][j] == 'x')
                    {
                        cnt = 1;
                        drn = true;
                        total = j + 1;
                        break;
                    }
                }
                if ((i == (n - 1)) && (j == (x - 1)))
                {
                    if (a[i][j - 1] == 'x')
                    {
                        cnt = 1;
                        fauc = true;
                        total = i + 1;
                        break;
                    }
                    else if (a[i - 1][j] == 'x')
                    {
                        cnt = 1;
                        drn = true;
                        total = j + 1;
                        break;
                    }
                }
            }
        }
        if (cnt == 1)
        {
            break;
        }
    }
    if (fauc)
    {
        cout<<"Faucet "<<total;
    }
    else if (drn)
    {
        cout<<"Drain "<<total;
    }
    cout<<"\n";
    return 0;
}