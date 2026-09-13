#include<bits/stdc++.h>
using namespace std;
void collection (int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    return;
}
void calculation (int a[], int mini, int mini_index, int maxi, int maxi_index, int n)
{
    int sec1, sec2, final_sec;
    if (mini_index == n - 1)
    {
        sec1 = 0;
    }
    else
    {
        sec1 = n - 1 - mini_index;
    }
    if (maxi_index == 0)
    {
        sec2 = 0;
    }
    else if (mini_index < maxi_index)
    {
        sec2 = maxi_index - 1;
    }
    else
    {
        sec2 = maxi_index;
    }
    final_sec = sec1 + sec2;
    cout<<final_sec;
}
int main ()
{
    int n;
    cin>>n;
    int a[n], mini, maxi, i, mini_index, maxi_index;
    collection (a, n);
    mini = *min_element (a, a + n);
    maxi = *max_element (a, a + n);
    mini_index = min_element (a, a + n) - a;
    maxi_index = max_element (a, a + n) - a;
    for (i = 1; i < n; i++)
    {
        if (a[i] == mini)
        {
            mini_index = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            maxi_index = i;
            break;
        }
    }
    calculation (a, mini, mini_index, maxi, maxi_index, n);
    return 0;
}