#include <iostream>

using namespace std;

int main()
{
    double salario, salarioAtualizado, aumento, porcentagem;

    cout << "Calcular ajuste do funcionario" << endl;

    cout <<  "Digite o salrio do funcionario: ";
    cin >> salario;

    if(salario <= 1000)
    {
        porcentagem = 0.20;
    }
    else if
    (salario <= 3000)
    {
        porcentagem = 0.15;
    }
    else if(
        salario <= 8000)
    {
        porcentagem = 0.10;
    }
    else
    {
        cout <<  "Calcule novamente";
    }

    aumento = salario * porcentagem;
    salarioAtualizado = salario + aumento;

    cout << "Novo salario = " << salarioAtualizado << endl;
    cout << "Aumento = " << aumento << endl;
    cout << "Porcentagem = " << porcentagem * 100<< " %" << endl;

    return 0;
}
