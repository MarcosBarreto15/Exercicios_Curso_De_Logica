#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, maiorPosicao;

    cout << "Quantas numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    double maior = 0;

    for (i = 0; i < N; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            maiorPosicao = i;
        }
    }

    cout << endl;
    cout << "MAIOR VALOR = " << fixed << setprecision(1) << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << maiorPosicao << endl;

    return 0;
}