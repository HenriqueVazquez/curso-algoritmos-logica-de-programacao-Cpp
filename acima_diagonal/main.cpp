#include <iostream>

using namespace std;

int main()
{



    int i = 0, n = 0, j = 0, somaDiagonalPrincipal = 0, controleSoma = 0;


    do
    {
        cout << "Qual a quantidade de colunas da matriz? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int mat[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout  << "Elemento [" << i << "," << j << "]: " ;
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            somaDiagonalPrincipal = somaDiagonalPrincipal + mat[i][j];
        }

    }


    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << somaDiagonalPrincipal << endl;


    return 0;
}
