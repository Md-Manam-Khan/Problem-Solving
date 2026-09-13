#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int hour, min;
    if ((h1 == h2) && (m1 == m2))
    {
        hour = 24;
        min = 0;
    }
    else 
    {
        if (m2 >= m1) 
        {
            min = m2 - m1;
            hour = h2 - h1;
        } 
        else 
        {
            min = 60 - (m1 - m2);
            hour = h2 - h1 - 1;
        }
        if (hour < 0)
        {
            hour += 24;
        }    
    }
    cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;
    return 0;
}