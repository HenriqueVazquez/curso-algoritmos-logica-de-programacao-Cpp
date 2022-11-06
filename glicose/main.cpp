#include <iostream>

using namespace std;

int main()
{
    double glicose;
    string classificacao;


    cout <<  "Digite a medida da glicose: ";
    cin >> glicose;

    if(glicose <= 100)
    {
        classificacao = "Normal";
    }
    else if(glicose <= 140)
    {
        classificacao = "Elevado";
    }else {
        classificacao = "Diabetes";
    }
    cout <<  "Classificacao: " << classificacao << endl;

    return 0;
}
