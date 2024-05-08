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

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin.ignore(INT_MAX, '\n');
        cin >> vet[i];
    }

    cout << endl;
    cout << fixed << setprecision(1);
    cout << "VALORES = ";

    for (i = 0; i < N; i++)
    {
        cout << fixed << setprecision(1);
        cout << vet[i] << " ";
    }

    double soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }

    media = (double)soma / N;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}