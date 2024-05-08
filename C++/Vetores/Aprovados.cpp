#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Quantos alunos serao digitados ? ";
    cin >> N;

    double nota1[N], nota2[N];
    string nome[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno: " << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    double media[N];

    for (i = 0; i < N; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2.0;
    }

    cout << "Alunos aprovados:" << endl;

    for (i = 0; i < N; i++)
    {
        if (media[i] >= 6.0)
        {
            cout << nome[i] << endl;
        }
    }

    return 0;
}