#include <iostream>

using namespace std;

int main()
{


    int i = 0, n = 0, j = 0;

    do
    {
        cout << "Quantos numeros voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int vetNumeroA[n];
    int vetNumeroB[n];
    int vetNumeroC[n];



    cout << "Digite os valores do vetor A: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> vetNumeroA[i];
    }

    cout << "Digite os valores do vetor B: " << endl;
    for(i = 0; i < n; i++)
{
    cin >> vetNumeroB[i];
    }

    for(i = 0; i < n; i++)
{
    vetNumeroC[i] = vetNumeroA[i] + vetNumeroB[i];
    }


    cout << "VETOR RESULTANTE:" << endl;
    for(i = 0; i < n; i++)
{
    cout << vetNumeroC[i] << endl;
    }

    return 0;
}
