#include <iostream>

using namespace std;

int main()
{
    int Gasolina = 0, Alcool  = 0, Diesel = 0, codigo = 0;

   do{

      cout <<  "Informe um codigo (1, 2, 3) ou 4 para parar: " ;
      cin >> codigo;

      while(codigo < 1 || codigo > 4) {
         cout <<  "Informe um codigo valido (1, 2, 3) ou 4 para parar: ";
         cin >> codigo;
      }

      switch(codigo){
      case 1:
         Alcool = Alcool +1;
         break;
      case 2:
         Gasolina = Gasolina + 1;
         break;
      case 3:
         Diesel = Diesel +1;
         break;
   }

  }while(codigo != 4);

    cout <<  "MUITO OBRIGADO" << endl;
    cout <<  "1- Alcool: " << Alcool << endl;
    cout <<  "2- Gasolina: " << Gasolina << endl;
    cout <<  "3- Diesel: " << Diesel << endl;

    return 0;
}
