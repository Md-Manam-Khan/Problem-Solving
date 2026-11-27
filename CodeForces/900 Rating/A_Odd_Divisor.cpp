#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops,no-stack-protector")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt,fma")
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
template <typename T>
using vec = vector<T>;
#define fi first
#define se second
#define pf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back
#define ins insert
#define mpr make_pair
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
using vpll = vec <pll>;
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
const int N = 1e6;
constexpr int MaxInt = numeric_limits<int>::max();
constexpr ll MaxLL = numeric_limits<ll>::max();
constexpr ull MaxULL = numeric_limits<ull>::max();
constexpr ld MaxLD = numeric_limits<ld>::max();
constexpr ll MinLL = numeric_limits<ll>::lowest();
constexpr ld MinLD = numeric_limits<ld>::lowest();
vector<bool> sieve(int n) 
{
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    if(n >= 1)
    {
        prime[1] = false;
    }
    for(ll i = 2; i * i <= n; i++) 
    {
        if(prime[i]) 
        {
            for(ll j = i * i; j <= n; j += i) 
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll testCases, i, j, n, x, k;
    ll total = 0, sum = 0, cnt = 0, even = 0, odd = 0;
    ld d, y, z;
    char c, c1, c2;
    str s, s1, s2;
    bool found = false, seen = false, truth = false;
    //auto prime = sieve(N);
    cin>>testCases;
    while(testCases--)
    {
        cin>>n;
        while((n % 2) == 0)
        {
            n /= 2;
        }
        if(n > 1)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    cout<<"\n";
    return 0;
} 