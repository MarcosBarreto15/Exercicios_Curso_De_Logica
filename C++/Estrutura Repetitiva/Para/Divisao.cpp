#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double divisao;
    int N, i, numerador, denominador;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >> denominador;
        if (denominador == 0)
        {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else
        {
            divisao = (double)numerador / denominador;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << divisao << endl;
        }
    }

    return 0;
}
