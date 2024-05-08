#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cout << "Digite um numero: ";
        cin >> x;
        if (x % 2 == 0 && x != 0)
        {
            if (x > 0)
            {
                cout << "PAR POSITIVO" << endl;
            }
            else
            {
                cout << "PAR NEGATIVO" << endl;
            }
        }
        else if (x % 2 != 0 && x != 0)
        {
            if (x > 0)
            {
                cout << "IMPAR POSITIVO" << endl;
            }
            else
            {
                cout << "IMPAR NEGATIVO" << endl;
            }
        }
        else
        {
            cout << "NULO" << endl;
        }
    }

    return 0;
}