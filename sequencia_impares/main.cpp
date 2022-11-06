#include <iostream>

using namespace std;

int main()
{
    int x, i;

    do
    {
        cout << "Digite o valor de X ou 0 para finalizar: ";
        cin >> x;
        for(i = 1; i <= x; i++)
        {
            if(i % 2 != 0 )
            {
                cout << i  << endl;;
            }
        }
    }
    while( x != 0);

    return 0;
}
