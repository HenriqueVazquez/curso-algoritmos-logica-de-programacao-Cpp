#include <bits/stdc++.h>

using namespace std;

int main()
{


    int  i = 0, n = 0, j = 0, totalHomens = 0, totalMulher = 0;
    double menorAltura = 0, maiorAltura = 0, somaAlturaMulheres = 0, mediaAlturaMulheres = 0;

    bool temMulher = false;

    do
    {
        cout << "Quantas pessoas voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vetAltura[n];
    char vetGenero[n];


    for(i = 0; i < n; i++)
    {
        cout << "Altura da " << i + 1 <<"a pessoa: ";
        cin >> vetAltura[i];

        do
        {
            cout << "Genero da " << i + 1 << "a pessoa: ";
            cin >> vetGenero[i];

        }
        while((vetGenero[i] !=  'F'  && vetGenero[i] !=  'f')  &&  (vetGenero[i] !=  'm'  && vetGenero[i] != 'M') );
        cout << endl;
    }

    menorAltura  =   vetAltura[0];
    menorAltura  =   vetAltura[0];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetAltura[i] <= vetAltura[j] && vetAltura[i] <= menorAltura)
            {
                menorAltura =  vetAltura[i];
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetAltura[i] >= vetAltura[j] && vetAltura[i] >= maiorAltura)
            {
                maiorAltura =  vetAltura[i];
            }
        }
    }


    for(i = 0; i < n; i++)
    {
        if(vetGenero[i] == 'F' || vetGenero[i] ==  'f' )
        {
            somaAlturaMulheres = somaAlturaMulheres +  vetAltura[i];
            temMulher = true;
            totalMulher = totalMulher + 1;
        }
        else if(vetGenero[i] == 'M' || vetGenero[i] ==  'm')
        {
            totalHomens =  totalHomens + 1;
        }
    }


    cout << fixed << setprecision(2);
    cout << "Menor altura = " <<  menorAltura << endl;
    cout << "Maior altura = " <<  maiorAltura << endl;

    if(temMulher == true)
    {
        mediaAlturaMulheres =(double)  somaAlturaMulheres /  totalMulher;
        cout << "Media das alturas das mulheres = " <<  mediaAlturaMulheres << endl;
    }
    else
    {
        cout  << "Não foi possivel calcular media, mão há mulheres informadas" << endl;
    }
    cout  << "Numero de homens = " <<   totalHomens << endl;


    return 0;
}
