#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Quantas numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl;
    cout << "NUMEROS PARES: " << endl;

    int cont = 0;
    for (i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
            cont++;
        }
    }

    cout << endl;
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << cont << endl;

    return 0;
}