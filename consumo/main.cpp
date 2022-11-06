#include <bits/stdc++.h>

using namespace std;

int main()
{
    double distancia, combustivelGasto, consumo;

    cout << "Calculo de consumo:" << endl;
    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustível gasto: ";
    cin >> combustivelGasto;


    consumo = distancia / combustivelGasto;
    cout << fixed << setprecision(3);
    cout <<  "O consumo medio = " << consumo << endl;

    return 0;
}
