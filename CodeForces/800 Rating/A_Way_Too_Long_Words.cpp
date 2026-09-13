#include<bits/stdc++.h>
using namespace std;
void judge (string word) //internationalization [20]
{
    int length = word.length(); //20
    if (length > 10)
    {
        cout<<word[0]<<length - 2<<word[length-1]<<endl;
    }
    else
    { 
        cout<<word<<endl;
    }
}
int main()
{
    int i, n;
    string x;
    cin>>n; //1
    for (i=0; i < n; i++)
    {
        cin>>x; //internationalization
        judge(x);
    }
    return 0;
}