#include <bits/stdc++.h>

using namespace std;

int main()
{
    double preco, dinheiro, troco, resto;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    if (dinheiro >= (preco * quantidade))
    {
        troco = (double) dinheiro - preco * quantidade;
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco << endl;
    }
    else
    {
        resto =  preco * quantidade - dinheiro;
        cout << fixed << setprecision(2);
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << resto << " REAIS" << endl;
    }

    return 0;
}
