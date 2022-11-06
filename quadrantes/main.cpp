#include <iostream>

using namespace std;

int main()
{
    int  x, y ;
    string q;


    cout << "Digite os valores das coordenadas x:  ";
    cin >> x;
    cout << "Digite os valores das coordenadas y:  ";
    cin >> y;
    while(x != 0 || y != 0)
    {
        if(x > 0 && y > 0)
        {
            q = "Q1";
        }
        else if (x < 0 && y > 0)
        {
            q = "Q2";
        }
        else if (x < 0 && y < 0)
        {
            q = "Q3";
        }
        else if (x > 0 && y < 0)
        {
            q = "Q4";
        }
        else if (x == 0 && y == 0)
        {
            q = "Origem";
        }
        else if (x == 0)
        {
            q = "Eixo y";
        }
        else
        {
            q = "Eixo x";
        }

        cout << "QUADRANTE " << q << endl;
        cout << "Digite os valores das coordenadas x:  " ;
        cin >> x;
        cout << "Digite os valores das coordenadas y:  " ;
        cin >> y;
    }

    return 0;
}
