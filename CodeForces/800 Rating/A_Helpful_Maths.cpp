#include <bits/stdc++.h>
using namespace std;
int i, j, n;
void calculate(string s)
{
    n = s.length();
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((s[i] == '+') || (s[j] == '+'))
            {
                continue;
            }
            else if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    cout << s;
}
int main()
{
    string s;
    cin >> s;
    calculate(s);
}