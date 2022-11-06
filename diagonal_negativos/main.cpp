#include <iostream>

using namespace std;

int main()
{

   int i , n = 0, j , somaNegativos = 0;


   do
    {
        cout << "Qual a ordem da matriz? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    int mat[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
         cout << "Elemento [" << i <<  "," << j << "]: ";
         cin >> mat[i][j];
        }
    }


   cout << "DIAGONAL PRINCIPAL:" << endl;
   for(i = 0; i < n; i++)
    {
      cout << mat[i][i] << " ";
    }
   cout << endl;


   for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
         if(mat[i][j] < 0){
            somaNegativos = somaNegativos + 1;
         }
        }
    }

   cout << "QUANTIDADE DE NEGATIVOS = " << somaNegativos;


    return 0;
}
