#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int  N, i;
    double  nota1, nota2, nota3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for(i = 1; i <=  N; i++)
    {
        cout << "Digite tres numeros: " << endl;
        cin >> nota1;
        cin >> nota2;
        cin >> nota3;

        media = (double)((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;


    }

    return 0;
}
