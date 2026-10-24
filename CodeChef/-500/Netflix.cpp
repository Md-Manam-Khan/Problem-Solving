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
using vll = vector <ll>;
using vc = vector <char>;
using str = string;
using pll = pair <ll, ll>;
using sll = set <ll>;
using mll = multiset <ll>;
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
    str s;
    char c;
    total = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>i>>j>>k;
        if (((n + i) >= k) || ((n + j) >= k) || ((j + i) >= k))
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