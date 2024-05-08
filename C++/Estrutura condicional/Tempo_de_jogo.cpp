#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double F, C;
    char resp;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> resp;

    cout << fixed << setprecision(2);
    if (resp == 'F')
    {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> F;
        C = (F - 32) / 1.8;
        cout << "Temperatura equivalente em Celsius: " << C;
    }
    else
    {
        cout << "Digite a temperatura em Celsius: ";
        cin >> C;
        F = C * 9 / 5 + 32;
        cout << "Tenperatura equivalente em Fahrenheit: " << F;
    }

    return 0;
}