#include <iostream>

using namespace std;

int main()
{

    int i, maior = 0, n, j;
    do
    {
        cout << "Qual a quantidade de colunas da matriz? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int mat[n][n];
    int maiorDaLinha[n];


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        maior = mat[i][0];

        for(j = 0; j < n; j++)
        {
            if(maior < mat[i][j])
            {
                maior = mat[i][j];
            }
        }
        maiorDaLinha[i] = maior;
    }

    cout << endl;

    cout  << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for(i = 0; i < n; i++)
    {
        cout  << maiorDaLinha[i] << endl;
    }


    return 0;
}
