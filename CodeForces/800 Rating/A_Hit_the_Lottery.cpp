#include<bits/stdc++.h>
using namespace std;
void calculation (int n)
{
    int cash = n, notes = 0, x;
    if (cash >= 100) //138
        {
            x = cash / 100; //1
            cash = cash % 100; //38
            notes += x; //1
            if (cash >= 20)
            {
                x = cash / 20; //1
                cash = cash % 20; //18
                notes += x; //2
            }
            if (cash >= 10)
            {
                x = cash / 10; //1
                cash = cash % 10; //8
                notes += x; //3
                }
            if (cash >= 5)
            {
                x = cash / 5;
                cash = cash % 5;
                notes += x;
            }
            if (cash >= 1)
            {
                notes += cash;
            }
        }
        else if ((cash > 20) && (cash < 100))
        {
            x = cash / 20;
            cash = cash % 20;
            notes += x; 
            if (cash >= 10)
            {
                x = cash / 10;
                cash = cash % 10;
                notes += x;
            }
            if (cash >= 5)
            {
                x = cash / 5;
                cash = cash % 5;
                notes += x;
            }
            if (cash >= 1)
            {
                notes += cash;
            }
        }
        else if ((cash > 10) && (cash < 20))
        {
            x = cash / 10;
            cash = cash % 10;
            notes += x;
            if (cash >= 5)
            {
                x = cash / 5;
                cash = cash % 5;
                notes += x;
            }
            if (cash >= 1)
            {
                notes += cash;
            }
        }
        else if ((cash > 5) && (cash < 10))
        {
            x = cash / 5;
            cash = cash % 5;
            notes += x;
            if (cash >= 1)
            {
                notes += cash;
            }
        }
        else if (cash >= 1)
        {
            {
                notes += cash;
            }
        }
    cout<<notes;
}
int main ()
{
    int n;
    cin>>n;
    calculation(n);
    return 0;
}