#include <bits/stdc++.h>

using namespace std;

int main()
{

    double temperatura, temperaturaConvertida;
    char unidadeMedida,  unidadeMedidaResposta;
    string unidadeResposta;


    cout <<  "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> unidadeMedida;



    if(unidadeMedida == 'F'  || unidadeMedida == 'f')
    {
        cout <<   "Digite a temperatura em Fahrenheit: ";
        cin >> temperatura;
        temperaturaConvertida = (5.0/9.0)* (temperatura - 32.0);
        unidadeResposta = "celsius";
        unidadeMedidaResposta = 'C';

    }
    else if(unidadeMedida == 'C'  || unidadeMedida == 'c')
    {
        cout <<   "Digite a temperatura em Celsius: ";
        cin >> temperatura;
        temperaturaConvertida = temperatura * 1.8 + 32;
        unidadeResposta = "fahrenheit";
        unidadeMedidaResposta = 'F';
    }
    else
    {
        unidadeResposta = "Conversão impossivel para unidade informada";

    }


    if(unidadeResposta == "Conversão impossivel para unidade informada")
    {
        cout <<  unidadeResposta << endl;
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em " << unidadeResposta << " : " << temperaturaConvertida << "°" << unidadeMedidaResposta << endl;
    }

    return 0;
}
