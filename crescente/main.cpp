#include <iostream>

using namespace std;

int main()
{
    int x, y ;
    string ordem;

    cout << "Digite o primeiro numero:  ";
    cin >> x;
    cout << "Digite o primeiro numero:  ";
    cin >> y;



    while(x != y)
    {
        if(x > y)
        {
            ordem = "Decrescente";
        }
        else
        {
            ordem = "Crescente";
        }
        cout <<  "A ordem de " << x << " e " << y << " eh: " << ordem << endl;

        cout << "Digite o primeiro numero:  ";
        cin >> x;
        cout << "Digite o primeiro numero:  ";
        cin >> y;
    }
    cout << "FIM";

    return 0;
}
