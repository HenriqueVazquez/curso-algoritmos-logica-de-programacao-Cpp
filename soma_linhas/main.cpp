#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int m, i, n, j;
    double somaLinhas = 0;

    do
    {
        cout << "Qual a quantidade de linhas da matriz? " ;
        cin >>  m;
    }
    while(m < 0 && m > 10);

    do
    {
        cout << "Qual a quantidade de colunas da matriz? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);
    int mat[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "Digite os elementos da " << i + 1  << "a linha:" << endl;
            cin >> mat[i][j];
        }
    }
    cout << fixed << setprecision(1);

    cout << "VETOR GERADO:" << endl;
    for(i = 0; i < n; i++)
    {
        if (somaLinhas > 0)
        {
            cout << somaLinhas << endl;
            somaLinhas = 0;
        }
        for(j = 0; j < n; j++)
        {
            somaLinhas = somaLinhas + mat[i][j];


        }
    }

    return 0;
}
