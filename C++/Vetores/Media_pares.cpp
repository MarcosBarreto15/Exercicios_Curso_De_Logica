#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;
    double media;

    cout << "Quantos elementos vai ter o vetor ? ";
    cin >> N;

    int vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    int soma = 0;
    int cont = 0;
    for (i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            soma = soma + vet[i];
            cont++;
        }
    }

    media = (double)soma / cont;

    if (cont == 0)
    {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else
    {
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}