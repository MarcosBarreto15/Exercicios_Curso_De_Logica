#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int minutos, excedente;
    double valorPago;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos <= 100)
    {
        valorPago = 50.00;
    }
    else
    {
        excedente = minutos - 100;
        valorPago = 50 + (excedente * 2);
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valorPago << endl;

    return 0;
}