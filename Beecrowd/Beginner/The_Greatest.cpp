#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int lar = *max_element(a, a + 3);
    cout<<lar<<" eh o maior"<<endl;
    return 0;
}