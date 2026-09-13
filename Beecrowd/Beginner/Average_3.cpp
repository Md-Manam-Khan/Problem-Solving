#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    double media = (n1*2 + n2*3 + n3*4 + n4*1) / 10.0;
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;
    if (media >= 7.0) 
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) 
    {
        cout << "Aluno reprovado." << endl;
    }
    else 
    {
        cout << "Aluno em exame." << endl;
        double n5;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        double final_media = (media + n5) / 2.0;
        if (final_media >= 5.0) 
        {
            cout << "Aluno aprovado." << endl;
        } 
        else 
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << final_media << endl;
    }
    return 0;
}