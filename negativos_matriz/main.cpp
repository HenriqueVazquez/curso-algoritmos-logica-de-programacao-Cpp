#include <iostream>

using namespace std;

int main()
{


    int  m, i, n, j, somaLinhas = 0 ;
    bool temNegativo = false;

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
            cout << "Elemento [" << i  << " ," << j << " ]: ";
            cin >> mat[i][j];
        }

    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j]  < 0)
            {
                temNegativo = true;
            }
        }
    }

    if(temNegativo == true)
    {
        cout << "VALORES NEGATIVOS: "  << endl;
    }


    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j]  < 0)
            {
                cout << mat[i][j] << endl;
            }


        }
    }


    return 0;
}
