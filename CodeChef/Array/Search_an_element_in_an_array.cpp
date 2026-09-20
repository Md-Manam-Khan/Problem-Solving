#include <bits/stdc++.h>
using namespace std;
string solve(int N, int X, vector<int> &arr)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            return "YES";
        }
    }
    return "NO";
}