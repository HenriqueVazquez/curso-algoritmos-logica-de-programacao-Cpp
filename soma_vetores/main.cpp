#include <iostream>

using namespace std;

int main()
{
    double  soma = 0, media = 0;

    int  i = 0, n = 0;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vet[n];


    for(i = 0; i < n; i++)
    {
        cout << "Digite um numero para somar: ";
        cin >> vet[i];
    }
    cout << endl;
    cout << "VALORES = ";
    for(i = 0; i < n; i++)
    {
        cout << vet[i] <<" ";
    }

    for(i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }

    media = (double) soma / n;

    cout << endl;
    cout <<  "SOMA = " << soma << endl;
    cout << "Media = " << media << endl;

    return 0;
}
