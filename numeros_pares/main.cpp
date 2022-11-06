#include <iostream>

using namespace std;

int main()
{

    int i = 0, n = 0, somaPares = 0;


    somaPares = 0;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int vetNumero[n];


    for(i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
       cin >> vetNumero[i];

    }

    cout << " " << endl;
    for(i = 0; i < n; i++)
    {
        if (vetNumero[i]% 2 == 0)
        {
            cout << vetNumero[i] << " ";
            somaPares = somaPares + 1;
        }
    }

    cout << " " << endl;
         cout << "QUANTIDADE DE PARES = " << somaPares << endl;

    return 0;
}
