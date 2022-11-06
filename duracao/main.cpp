#include <iostream>

using namespace std;

int main()
{
    int duracao, segundos, horas, resto, minutos;

    cout << "duração:" << endl;
    cout << "Digite a duração em segundos: ";
    cin >> duracao;


    horas =  duracao  / 3600;
    resto = duracao % 3600;

    minutos = resto / 60;
    segundos  = resto %  60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
