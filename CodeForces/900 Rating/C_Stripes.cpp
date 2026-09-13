#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n, i, j, row = 8, column = 8;
    cin >> t;
    while (t--) 
    {
        vector <vector <char>> a (row, vector <char> (column));
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin>>a[i][j];
            }
        }
        bool allR;
        bool lastR = false;
        for (i = 0; i < 8; i++)
        {
            allR = true;
            for (j = 0; j < 8; j++)
            {
                if (a[i][j] == 'B')
                {
                    allR = false;
                    break;
                }
            }
            if (allR)
            {
                lastR = true;
            }
        }
        if (lastR)
        {
            cout<<"R\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
    return 0;
}