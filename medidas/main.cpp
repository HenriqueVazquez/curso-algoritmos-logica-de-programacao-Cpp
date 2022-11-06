#include <bits/stdc++.h>

using namespace std;

int main()
{
    double  A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    cout << "Digite a medida A: ";
    cin >> A;
    cout << "Digite a medida B: ";
    cin >> B;
    cout << "Digite a medida C: ";
    cin >> C;

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2;
    areaTrapezio = (A + B) / 2 * C;
    cout << fixed << setprecision(4);
    cout << "QUADRADO = " << areaQuadrado << endl;
    cout << "TRIANGULO = " << areaTriangulo << endl;
    cout << "TRAPEZIO = " << areaTrapezio << endl;

    return 0;
}
