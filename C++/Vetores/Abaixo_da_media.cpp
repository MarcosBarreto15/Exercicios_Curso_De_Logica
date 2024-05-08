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

    double vet[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    double soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }

    media = soma / N;

    cout << endl;
    cout << "MEDIA DO VETOR: " << fixed << setprecision(3) << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA: " << endl;

    for (i = 0; i < N; i++)
    {
        if (vet[i] < media)
        {
            cout << fixed << setprecision(1);
            cout << vet[i] << endl;
        }
    }

    return 0;
}