#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long contest, i, j, amazing = 0, big, small;
    cin>>contest;
    long long point[contest];
    for (i = 0; i < contest; i++)
    {
        cin>>point[i];
    }
    if (contest == 1)
    {
    }
    else if (contest == 2)
    {
        if (point[0] == point[1])
        {
        }
        else
        {
            amazing = 1;
        }
    }
    else
    {
        for (i = 1; i < contest; i++)
        {
            big = *max_element(point, point + i);
            small = *min_element(point, point + i);
            if ((point[i] > big) || (point[i] < small))
            {
                amazing++;
            }
        }
    }
    cout<<amazing;
}