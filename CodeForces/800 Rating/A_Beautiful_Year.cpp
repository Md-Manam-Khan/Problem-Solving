#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int y;
    cin>>y;
    while (1)
    {
        y++;
        string s = to_string (y);
        if (((s[0] != s[1]) && (s[0] != s[2]) && (s[0] != s[3])) && ((s[1] != s[2]) && (s[1] != s[3])) && (s[2] != s[3]))
        {
            y = stoi (s);
            cout<<y;
            return 0;
        }
    }
}