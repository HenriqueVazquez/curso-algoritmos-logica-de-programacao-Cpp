#include <iostream>

using namespace std;

int main()
{
    int n, i;

    bool temNegativo = false;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int vet[n];

    for(i = 0; i < n; i++)
    {
        cout <<  "Digite um numero: ";
        cin >> vet[i];
    }

    for(i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            temNegativo = true;

        }
    }

    if (  temNegativo == true)
    {
        cout << "Numeros negativos: " << endl;
    }
    else
    {
        cout << "Não digitou numeros negativos: " << endl;
    }

    for(i = 0; i < n; i++)
    {
        if(vet[i] < 0)
        {
            cout << vet[i] << endl;
        }
    }

    return 0;
}
