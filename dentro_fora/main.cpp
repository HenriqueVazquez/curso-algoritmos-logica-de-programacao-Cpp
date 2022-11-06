#include <iostream>

using namespace std;

int main()
{

    int x = 0, n = 0, dentro = 0, fora = 0, i = 0 ;



    do
    {
        cout << "Quantos numeros voce vai digitar? ";
        cin >> n;

        for(i = 1; i<= n; i++)
        {
            cout << "Digite um numero: " ;
            cin >> x;

            if(x >= 10  && x <= 20)
            {
                dentro = dentro + 1;
            }
            else
            {
                fora = fora + 1;
            }
        }

        cout << dentro <<  " DENTRO" << endl;
        cout << fora << " FORA" << endl;
    }
    while(x == 0);


    return 0;
}
