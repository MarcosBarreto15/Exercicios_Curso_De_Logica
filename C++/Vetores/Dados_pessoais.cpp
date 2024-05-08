#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Quantas pessoas serao digitados ? ";
    cin >> N;

    double altura[N], mediaF;
    char genero[N];

    for (i = 0; i < N; i++)
    {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> altura[i];
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> genero[i];
    }

    double menor = i;
    for (i = 0; i < N; i++)
    {
        if (altura[i] < menor)
        {
            menor = altura[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;

    double maior = 0;

    for (i = 0; i < N; i++)
    {
        if (altura[i] > maior)
        {
            maior = altura[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Maior altura = " << maior << endl;

    double somaF = 0;
    int contF = 0;

    for (i = 0; i < N; i++)
    {
        if (genero[i] == 'M')
        {
            contF++;
            somaF = somaF + altura[i];
        }
    }

    mediaF = (double)somaF / contF;
    cout << fixed << setprecision(2);
    cout << "Media das alturas das mulheres = " << mediaF << endl;

    int contM = 0;
    for (i = 0; i < N; i++)
    {
        if (genero[i] == 'M')
        {
            contM++;
        }
    }

    cout << "Numero de homens = " << contM << endl;

    return 0;
}