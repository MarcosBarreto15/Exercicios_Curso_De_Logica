#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, x, dentro, fora;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    dentro = 0;
    fora = 0;
    for (i = 1; i <= N; i++)
    {
        cout << "Digite um numero: ";
        cin >> x;
        if (x >= 10 && x <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}