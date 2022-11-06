#include <bits/stdc++.h>

using namespace std;

int main()
{
    int codigo, quantidade;
    double valorPago ;


    cout <<  "Codigo do produto comprado: ";
    cin >>  codigo;
    cout <<  "Quantidade comprada: ";
    cin >> quantidade;

    switch(codigo)
    {
    case 1:
            valorPago = 5.0 * quantidade;
        break;
    case 2:
            valorPago = 3.5 * quantidade;
        break;
    case 3:
            valorPago = 4.8 * quantidade;
        break;
    case 4:
            valorPago = 8.9 * quantidade;
        break;
    case 5:
            valorPago = 7.32 * quantidade;
        break;
    }
    cout << fixed << setprecision(2);
    cout <<  "Valor a pagar: R$ " << valorPago << endl;


    return 0;
}
