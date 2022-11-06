#include <iostream>
#include <iomanip>

using namespace std;

int main()
{


    int i = 0, n = 0, somaMaiorIdade = 0;
    double  somaAltura = 0, mediaAltura  = 0, porcentagemMenorIdade = 0;

    do
    {
        cout << "Quantas pessoas serao digitadas? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vetAltura[n];
    int vetIdade[n];
    string vetNome[n];


    for(i = 0; i < n; i++)
    {
        cout <<  "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> vetNome[i];

        cout << "Idade: ";
        cin  >> vetIdade[i];

        cout << "Altura: ";
        cin >> vetAltura[i];
        cout << " " << endl;
    }

    for(i = 0; i < n; i++)
    {
        somaAltura = somaAltura +  vetAltura[i];
    }

    mediaAltura =  somaAltura / n;
    cout << fixed << setprecision(2);
    cout << "Altura média: " << mediaAltura << endl;


    for(i = 0; i < n; i++)
    {
        if(vetIdade[i] < 16)
        {
            somaMaiorIdade = somaMaiorIdade + 1;
        }
    }

    porcentagemMenorIdade =  (double)(somaMaiorIdade * 100) / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagemMenorIdade << "%" << endl;


    for(i = 0; i < n; i++)
    {
        if(vetIdade[i] < 16)
        {
            cout << vetNome[i] << endl;
        }
    }

    return 0;
}
