#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        long long Aj = 0, Ma = 0;

        for(int bit = 0; bit < 31; bit++){
            int last = -1;
            int mask = 1 << bit;

            for(int i = 0; i < n; i++){
                if( (a[i] ^ b[i]) & mask )
                    last = i + 1; // 1-based
            }

            if(last == -1) continue; // tie on this bit

            if(last & 1) Aj += mask;
            else Ma += mask;
        }

        if(Aj > Ma) cout << "Ajisai\n";
        else if(Ma > Aj) cout << "Mai\n";
        else cout << "Tie\n";
    }
}
