#include <iostream>

using namespace std;

int main()
{

    int i = 0, n = 0, j = 0,  posicaoMaisVelho = 0;


    do
    {
        cout << "Quantas pessoas voce vai digitar? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);
    int vetIdade[n];
    string vetNome[n];

    for(i = 0; i < n; i++)
    {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> vetNome[i];

        cout << "Idade: ";
        cin >> vetIdade[i];
        cout <<  endl ;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetIdade[i]  >= vetIdade[j]  && vetIdade[i] >= vetIdade[posicaoMaisVelho])
            {
                posicaoMaisVelho = i;
            }
        }
    }

    cout << "PESSOA MAIS VELHA: " << vetNome[posicaoMaisVelho] << endl;

    return 0;
}
