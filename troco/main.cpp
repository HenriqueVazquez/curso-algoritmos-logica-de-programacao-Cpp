#include <iostream>

using namespace std;

int main()
{
    double precoProduto, quantidade, pagamento, troco;

    cout << "Caixa:" << endl;
    cout << "Preco unitário do produto: ";
    cin >> precoProduto;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> pagamento;

    troco = pagamento - precoProduto * quantidade;



    cout << fixed << setprecision(2);
    cout << "troco = R$ " << troco << endl;

    return 0;
}
