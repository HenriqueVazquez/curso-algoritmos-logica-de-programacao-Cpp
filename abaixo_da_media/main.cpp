#include <iostream>
#include <iomanip>

using namespace std;

int main()
{


    double mediaVetor = 0, somaVetor = 0;
    int i, n;
    bool abaixoMedia = false;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vetNumeros[n];



    for(i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetNumeros[i];
    }

    for(i = 0; i < n; i++)
    {
        somaVetor = somaVetor +  vetNumeros[i];
    }
    cout << endl;

    mediaVetor = (double) somaVetor / n;
    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = "  << mediaVetor << endl;

    for(i = 0; i < n; i++)
    {
        if(vetNumeros[i] < mediaVetor)
        {
            abaixoMedia = true;
        }
    }

    if(abaixoMedia == true)
    {
        cout << "ELEMENTOS ABAIXO DA MEDIA: " << endl;
    }
    cout << fixed << setprecision(1);
    for(i = 0; i < n; i++)
    {
        if(vetNumeros[i] < mediaVetor)
        {
            cout << vetNumeros[i] << endl;
        }
    }

    return 0;
}
