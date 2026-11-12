#pragma GCC optimize("O3,Ofast,unroll-loops,fast-math,finite-math-only,no-signed-zeros,no-trapping-math,associative-math,reciprocal-math,unsafe-math-optimizations")
#pragma GCC optimize("inline,inline-functions,inline-small-functions,inline-functions-called-once,partial-inlining,indirect-inlining,early-inlining")
#pragma GCC optimize("tree-vectorize,tree-loop-vectorize,tree-slp-vectorize,tree-loop-distribution,tree-loop-im,tree-loop-ivcanon,ivopts")
#pragma GCC optimize("peel-loops,unswitch-loops,prefetch-loop-arrays,move-loop-invariants,predictive-commoning,split-loops")
#pragma GCC optimize("gcse,gcse-lm,gcse-sm,gcse-las,cse-follow-jumps,expensive-optimizations,schedule-insns,schedule-insns2,rename-registers,reorder-blocks,reorder-functions,crossjumping,thread-jumps,strict-aliasing,optimize-sibling-calls,tree-pre,tree-vrp,tree-partial-pre,hoist-adjacent-loads,store-merging,devirtualize,devirtualize-speculatively")
#pragma GCC optimize("no-stack-protector,omit-frame-pointer,no-plt,no-semantic-interposition,align-functions,align-loops,align-jumps,align-labels")
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
    ll t, x, n, i, j, k, total, sum, even, odd;
    ld d, y;
    str s;
    char c;
    bool found;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vll h(n), L, M, R;
        for (i = 0; i < n; i++)
        {
            cin>>h[i];
        }
        sort(all(h));
        ll mx = h[n - 1];
        for (i = 0; i < n; i++)
        {
            if (h[i] == mx) 
            {
                M.pb(mx);
            }
        }
        ll cmax = sz(M);
        i = 0;
        while (i < n && h[i] < mx)
        {
            j = i;
            while (j < n && h[j] == h[i])
            {
                j++;
            } 
            ll cnt = j - i;
            L.pb(h[i]);
            if (cnt >= 2) 
            {
                R.pb(h[i]);
            }
            for (k = 2; k < cnt; k++) 
            {
                M.pb(h[i]);
            }        
            i = j;
        }
        total = sz(L) + min(cmax, 2LL) + sz(R);
        cout<<total<<"\n";
        for (ll v : L) 
        {
            cout<<v<<" ";
        }
        for (ll v : M) 
        {
            cout<<v<<" ";
        }
        for (i = (ll)sz(R) - 1; i >= 0; i--) 
        {
            cout<<R[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}