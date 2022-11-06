#include <bits/stdc++.h>

using namespace std;

int main()
{
    double largura, comprimento, valorMetro, area, precoTerreno;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    area = largura * comprimento;
    precoTerreno = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno: " << area << endl;
    cout << "Preco do terreno: " << precoTerreno << endl;

    return 0;
}
