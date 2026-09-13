#include <bits/stdc++.h>
using namespace std;
void verdict(int flag)
{
    if (flag % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
int main()
{
    string name;
    int n, i, j, k, flag = 0;
    cin >> name;
    n = name.length();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (name[i] == name[j])
            {
                for (k = j; k < n- 1; k++)
                {
                    name[k] = name[k+1];
                }
                n--;
                j--;
            }
        }
    }
    name.erase(n);
    n = name.length();
    verdict(n);
}