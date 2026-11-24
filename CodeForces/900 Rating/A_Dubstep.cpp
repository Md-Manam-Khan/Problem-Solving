#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops,no-stack-protector")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt,fma")
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
    bool found = false, seen = false, truth = false;
    cin>>s;
    s1 = "";
    for (i = 0; i < sz(s); i++)
    {
        if ((s[i] == 'W') && (i != sz(s) - 1))
        {
            if ((s[i + 1] == 'U') && (s[i + 2] == 'B'))
            {
                s1 += " ";
                i += 2;
            }
            else
            {
                s1 += s[i];
            }
        }
        else
        {
            s1 += s[i];
        }
    }
    for (i = 0; i < s1.size() - 1; i++)
    {
        if ((s1[i] == ' ') && (s1[i + 1] == ' '))
        {
            s1.erase(i, 1);
            i -= 2;
        }
    }
    cout<<s1<<"\n";
    return 0;
} 