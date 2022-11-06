#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int N=0, i=0, qte=0, totalCobaias=0, totalSapos=0, totalCoelhos=0, totalRatos=0, tipoCobaiaCorreto=0;
    double pratos=0, psapos=0, pcoelhos=0;
    char tipoCobaia;

    cout << fixed << setprecision(2);
    cout << "Quantos casos de teste serao digitados? " ;
    cin >> N;

    while( N <= 0)
    {
        N = 0;
        cout<< "Digite um numero inteiro? " << endl;
        cin >> N;
    }

    for(i = 1; i <= N; i++)
    {


        do
        {
            cout << "Quantidade de cobaias: ";
            cin >> qte;
        }
        while(qte <= 0);

        do
        {
            cout << "Digite o tipo de cobaia correto:" << endl;
            cout << "R para rato" << endl;
            cout << "S para sapo" << endl;
            cout << "C para coelho" << endl;
            cout << "Tipo de cobaia: ";

            cin >> tipoCobaia;


            if(tipoCobaia == 's' || tipoCobaia == 'S')
            {
                tipoCobaiaCorreto = 1;
            }
            else if(tipoCobaia == 'c' || tipoCobaia == 'C')
            {
                tipoCobaiaCorreto = 1;
            }
            else if( tipoCobaia == 'r' || tipoCobaia == 'R')
            {
                tipoCobaiaCorreto = 1;
            }
            else
            {
                tipoCobaiaCorreto = 0;
            }
        }
        while( tipoCobaiaCorreto == 0);






        if(tipoCobaia == 's' || tipoCobaia == 'S')
        {
            totalSapos = totalSapos + qte;
        }

        else if(tipoCobaia == 'c' || tipoCobaia == 'C')
        {
            totalCoelhos = totalCoelhos + qte;
        }
        else if( tipoCobaia == 'r' || tipoCobaia == 'R')
        {

            totalRatos = totalRatos + qte;
        }
    }





totalCobaias = totalRatos + totalSapos + totalCoelhos;

pcoelhos = (double) totalCoelhos / totalCobaias * 100.0;
pratos = (double) totalRatos / totalCobaias * 100.0;
psapos = (double) totalSapos / totalCobaias * 100.0;


cout << "RELATORIO FINAL:" << endl;
cout << "Total: " << totalCobaias <<" cobaias"  << endl;
cout << "Total de coelhos: " << totalCoelhos << endl;
cout << "Total de ratos: " << totalRatos << endl;
cout << "Total de sapos: " << totalSapos << endl;
cout << "Percentual de coelhos: " << pcoelhos << endl;
cout << "Percentual de ratos: " << pratos << endl;
cout << "Percentual de sapos: " << psapos << endl;

return 0;
}
