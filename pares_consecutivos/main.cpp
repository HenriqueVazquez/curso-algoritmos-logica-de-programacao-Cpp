#include <iostream>

using namespace std;

int main()
{
      int  X, soma;

  cout <<  "Digite um numero inteiro: ";
   cin  >> X;

   while(X != 0) {

      if(X % 2 != 0){
         X = X + 1;
      }

      soma = 5 * X + 20;
      cout << "SOMA = " << soma << endl;

      cout <<  "Digite um numero inteiro: ";
      cin  >> X;

}

    return 0;
}
