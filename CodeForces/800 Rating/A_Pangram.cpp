#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, i, j;
    string s;
    cin >> n;
    cin >> s;
    x = s.length();
    char c, z[26];
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        for (i = 0; i < x; i++)
        {
            s[i] = tolower(s[i]);
        }
        for (i = 0, c = 'a'; i < 26; i++, c++)
        {
            z[i] = c;
        }
        for (i = 0; i < x; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                for (j = 0; j < 26; j++)
                {
                    if (s[i] == z[j])
                    {
                        z[j] = '1';
                    }
                }
            }
        }
    }
    for (j = 0; j < 26; j++)
    {
        if (z[j] != '1')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}