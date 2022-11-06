#include <bits/stdc++.h>

using namespace std;

int main()
{
    double raio, area, pi = 3.14159;

    cout << "Area de um criculo:" << endl;
    cout <<  "Informe o raio: " ;
    cin >> raio;


    area = pi * pow(raio, 2);
    cout << fixed << setprecision(3);
    cout << "Area = " << area<< endl;


    return 0;
}
