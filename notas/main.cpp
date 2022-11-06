#include <iostream>

using namespace std;

int main()
{
    double  nota1, nota2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaFinal = nota1 + nota2;

    cout <<  "NOTA FINAL = " <<  notaFinal << endl;

    cout << fixed << setprecision(2);
    if(notaFinal < 60.0)
    {
        cout <<  "REPROVADO" << endl;
    }
    else
    {
        cout <<  "APROVADO" << endl;
    }

    return 0;
}
