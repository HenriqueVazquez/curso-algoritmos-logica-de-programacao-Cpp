#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int  i = 0, n = 0, j = 0, posicao = 0;
    double maiorNumero = 0;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vetNumero[n];

    for(i = 0; i < n; i++)
    {
        cout <<  "Digite um numero: ";
        cin >> vetNumero[i];
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetNumero[i] >=   vetNumero[j] && vetNumero[i] >=   maiorNumero)
            {
                maiorNumero = vetNumero[i];
                posicao = i;
            }
        }
    }
    cout << fixed << setprecision(1);
    cout <<"MAIOR VALOR = " <<  maiorNumero << endl;
    cout << endl;
    cout <<  "POSICAO DO MAIOR VALOR = "<< posicao << endl;


    return 0;
}
