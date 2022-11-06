#include <iostream>

using namespace std;

int main()
{
    int i = 0, n = 0, j = 0, lucroMenor10 = 0, lucroEntre10e20 = 0, lucroAcima20 = 0;
    double valorTotalCompra = 0, valorTotalVenda = 0, valorTotalLucro = 0;

    do
    {
        cout << "Serao digitados dados de quantos produtos? " ;
        cin >>  n;
    }
    while(n < 0 && n > 10);

    double vetPrecoCompra[n];
    double vetPrecoVenda[n];
    double vetLucro[n];
    string vetNome[n];

    for(i = 0; i < n; i++)
    {
        cout << "Produto: " <<  i + 1 << endl;
        cout << "Nome: ";
        cin >> vetNome[i];

        cout << "Preco de compra: ";
        cin >> vetPrecoCompra[i];

        cout << "Preco de venda: ";
        cin >> vetPrecoVenda[i];
        cout << endl;
    }


    for(i = 0; i < n; i++)
    {
        vetLucro[i] = (double)((vetPrecoVenda[i] * 100) / vetPrecoCompra[i]) - 100;
    }

    for(i = 0; i < n; i++)
    {
        if(vetLucro[i] <  10)
        {
            lucroMenor10 = lucroMenor10 + 1;
        }
        else
        {
            if(vetLucro[i] >= 10 && vetLucro[i] < 20)
            {
                lucroEntre10e20 = lucroEntre10e20 + 1;
            }
            else
            {

                lucroAcima20 = lucroAcima20 + 1;

            }
        }
    }

    for(i = 0; i < n; i++)
    {
        valorTotalCompra = valorTotalCompra +   vetPrecoCompra[i];
        valorTotalVenda = valorTotalVenda + vetPrecoVenda[i];


    }
    valorTotalLucro = valorTotalVenda - valorTotalCompra;
    cout << fixed << setprecision(2);
    cout << "RELATORIO: " << endl;
    cout << "Lucro abaixo de 10%: " <<lucroMenor10 << endl;
    cout << "Lucro entre 10% e 20%: " <<  lucroEntre10e20 << endl;
    cout << "Lucro acima de 20%: " <<  lucroAcima20 << endl;
    cout << "Valor total de compra: " << valorTotalCompra << endl;
    cout <<"Valor total de venda: " << valorTotalVenda << endl;
    cout << "Lucro total: " << valorTotalLucro << endl;


    return 0;
}
