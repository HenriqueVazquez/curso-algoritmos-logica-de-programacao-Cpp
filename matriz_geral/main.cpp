#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i = 0, n = 0, j = 0, linhaEscolhida = 0, colunaEscolhida = 0;
    double somaPositivos = 0;

    do
    {
        cout << "Qual a ordem da matriz? ";
        cin >> n;

    }
    while (n <= 0 || n > 10);

    double mat[n][n];




    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(mat[i][j] >= 0)
            {
                somaPositivos = somaPositivos +  mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << "\nSOMA DOS POSITIVOS: " << somaPositivos << endl;
    cout << endl;

    cout  << "Escolha uma linha: " ;
    cin >> linhaEscolhida;

    cout << "LINHA ESCOLHIDA: ";

    for (int i=0; i<n; i++)
    {
        cout << mat[linhaEscolhida][i] << " ";
    }

    cout << "\n\nEscolha uma coluna: ";
    cin >> colunaEscolhida;

    cout << "COLUNA ESCOLHIDA: ";
    for (int i=0; i<n; i++)
    {
        cout << mat[i][colunaEscolhida]  << " ";
    }
    cout <<  endl ;


    cout << "\n\nDIAGONAL PRINCIPAL: " << endl;
    for(i = 0; i < n ; i++)
        for (int i=0; i<n; i++)
        {
            cout << mat[i][i] << " "  ;
        }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (mat[i][j] < 0)
            {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

   cout << "\n\nMATRIZ ALTERADA: " << endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << mat[i][j] << " ";
        }
       cout <<  endl ;
    }




    return 0;
}
