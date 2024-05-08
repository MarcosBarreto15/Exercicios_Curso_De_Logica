#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for (i = 0; i < N; i++)
    {
        if (vet[i] < 0)
        {
            cout << vet[i] << endl;
        }
    }

    return 0;
}
