#include <iostream>
#include <iomanip>

using namespace std;

int main()
{


    int somaVetor = 0;
    double mediaPares = 0;
    int i = 0, n = 0, contPar = 0;
    bool temPar = false;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int vetNumeros[n];


    for(i = 0; i < n; i++)
    {
        cout << i + 1 <<  "- Digite um numero: ";
        cin >> vetNumeros[i];
    }

    for(i = 0; i < n; i++)
    {
        if(vetNumeros[i] % 2 == 0)
        {
            somaVetor = somaVetor +  vetNumeros[i];
            temPar = true;
            contPar = contPar + 1;
        }
    }



    if(temPar  != true)
    {

        cout << "NENHUM NUMERO PAR" << endl;
    }
    else
    {
        mediaPares = (double) somaVetor / contPar;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << mediaPares ;
    }


    return 0;
}
