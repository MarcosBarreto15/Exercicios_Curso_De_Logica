#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, maior;
    string maisVelha;

    cout << "Quantas pessoas voce vai digitar ? ";
    cin >> N;

    int idade[N];
    string nome[N];

    for (i = 0; i < N; i++)
    {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
    }

    for (i = 0; i < N; i++)
    {
        if (idade[i] > maior)
        {
            maior = idade[i];
            maisVelha = nome[i];
        }
    }

    cout << "PESSOA MAIS VELHA: " << maisVelha << endl;

    return 0;
}