#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double altura[N], media, perc;
    int idade[N];
    string nome[N];

    for (i = 0; i < N; i++)
    {
        cout << "Datos da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    double soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + altura[i];
    }

    media = (double)soma / N;
    cout << endl;
    cout << "Altura media: " << fixed << setprecision(2) << media << endl;

    int cont = 0;

    for (i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            cont++;
        }
    }

    perc = (double)cont / N * 100;

    cout << "Pessoas com menos de 16 anos: " << fixed << setprecision(1) << perc << "%" << endl;

    int menor16 = 0;

    for (i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            cout << nome[i] << endl;
        }
    }
    

    return 0;
}