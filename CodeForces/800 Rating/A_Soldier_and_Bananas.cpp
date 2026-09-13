#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, i, j, c;
    cin >> k >> n >> w;
    c = k;
    if (w > 1)
    {
        for (i = 2; i <= w; i++)
        {
            k = k + (i * c);
        }
    }
    j = k - n;
    if ((k < n) || (k == n))
    {
        cout << "0";
    }
    else
    {
        cout << j;
    }
}