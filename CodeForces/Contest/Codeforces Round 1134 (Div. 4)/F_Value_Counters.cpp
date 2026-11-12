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
    bool found;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vll c(n + 1), prm(n + 1, 0);
        for (i = 1; i <= n; i++)
        {
            cin>>c[i];
        }
        found = true;
        for (i = 1; i <= n; i++)
        {
            ll pos = c[i] + n + 1 - i;
            if (pos < 1 || pos > n || prm[pos] != 0)
            {
                found = false;
                break;
            }
            prm[pos] = i;
        }
        if (!found)
        {
            cout<<-1<<"\n";
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                cout<<prm[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}