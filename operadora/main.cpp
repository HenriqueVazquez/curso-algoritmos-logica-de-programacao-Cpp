#include <iostream>

using namespace std;

int main()
{
    int minutos ;
    double valor = 50;

    cout <<  "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos > 100)
    {
        valor = (minutos - 100) * 2 + 50;

    }

    cout <<  "Valor a pagar:  " << valor << endl;

    return 0;
}
