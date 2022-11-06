#include <iostream>

using namespace std;

int main()
{

    int  N, i, x ;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for(i = 1; i <= N; i++)
    {
        cout << "Digite um numero: ";
        cin >> x;

        if (x == 0)
        {
            cout << "NULO" << endl;
        }
        else if(x % 2 == 0)
        {
            if( x < 0)
            {
                cout << "PAR NEGATIVO" << endl;
            }
            else
            {
                cout << "PAR POSITIVO" << endl;
            }
        }
        else if(x < 0)
        {
            cout <<  "IMPAR NEGATIVO" << endl;
        }
        else
        {
            cout << "IMPAR POSITIVO" << endl;
        }
    }


    return 0;
}
