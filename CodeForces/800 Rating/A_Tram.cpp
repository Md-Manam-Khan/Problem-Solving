#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, people = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        people = people - a + b;
        if (people > min)
        {
            min = people;
        }
    }
    cout << min;
}
