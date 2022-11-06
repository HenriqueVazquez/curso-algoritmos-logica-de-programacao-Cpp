#include <iostream>

using namespace std;

int main()
{
  int m = 0 , i = 0, n = 0, j = 0 ;


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

    int matA[m][n];
    int matB[m][n];
    int matSoma[m][n];

   cout << "Digite os valores da matriz A: " << endl;

   for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
          cout  << "Elemento [" << i <<" ," << j << " ]: ";
         cin >> matA[i][j];
        }
    }

   cout << "Digite os valores da matriz B: " << endl;

   for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
           cout  << "Elemento [" << i << " ," << j << " ]: ";
         cin >> matB[i][j];

        }
    }

 for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
         matSoma[i][j] =  matA[i][j] +  matB[i][j];
        }

    }


   cout << "MATRIZ SOMA: "   << endl;

   for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
         cout << matSoma[i][j] << " ";
        }
      cout << endl;
    }


    return 0;
}
