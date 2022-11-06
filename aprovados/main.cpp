#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0, n = 0,  somaAprovados = 0;
    bool temAprovado = false;

    do
    {
        cout << "Quantas pessoas voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double mediasNotas[n];
    double vetNota1[n];
    double vetNota2[n];
    string  aprovados[n];
    string  vetNome[n];


    for(i = 0; i < n; i++)
    {
        cout << "Digite nome, primeira e segunda nota do " <<  i + 1 << "o aluno: " << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, vetNome[i]);
        cin  >> vetNota1[i];
        cin  >> vetNota2[i];

    }



    for(i = 0; i < n; i++)
    {
        mediasNotas[i] = (double)(vetNota1[i] + vetNota2[i]) /2;
    }

    for(i = 0; i < n; i++)
    {
        if(mediasNotas[i] >= 6)
        {
            temAprovado  = true;
            aprovados[i] =  vetNome[i];
        }
    }

    cout << endl;
    if(temAprovado == true)
    {
        cout <<  "Alunos aprovados: " << endl;
        for(i = 0; i < n; i++)
        {
            if(mediasNotas[i] >= 6)
            {
                cout << aprovados[i] << endl;
            }

        }
    }


    return 0;
}
