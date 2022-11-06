#include <iostream>

using namespace std;

int main()
{
    int x, y, soma, i, troca ;


    cout << "Digite dois numeros ou dua vezes o zero para finalizar: " << endl;
    cin >> x;
    cin >> y;

    while (x != 0  || y != 0)
    {
        i = 0;
            soma = 0;

        if (x > y)
        {
            troca = x;
            x = y;
            y = troca;
        }
        for(i = x + 1; i <= y - 1; i++)
        {
            if(i % 2 != 0)
            {
                soma = soma + i;
            }
        }

        cout << "Soma dos impare = " << soma << endl;
        soma = 0;
        cout << "Digite dois numeros (ou dua vezes o zero para finalizar: " << endl;
        cin >> x;
        cin >> y;
    }
    cout << "Hello world!" << endl;
    return 0;
}
