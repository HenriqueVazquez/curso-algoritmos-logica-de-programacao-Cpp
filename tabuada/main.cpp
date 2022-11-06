#include <iostream>

using namespace std;

int main()
{
    int n, i ;



    cout << "Deseja a tabuada para qual valor ou digite 0 para sair?";
    cin >> n;

    while(n != 0)
    {
        for(i = 1; i <= 10; i++)
        {
            cout << n << " X " << i << " = " << n * i << endl;
        }
        cout << "Deseja a tabuada para qual valor ou digite 0 para sair?";
        cin >> n;

    }

    return 0;
}
