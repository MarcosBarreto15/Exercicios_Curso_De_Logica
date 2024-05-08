#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int codigo, alcool, gasolina, diesel;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (codigo != 4)
    {
        switch (codigo)
        {
        case 1:
            alcool++;
            break;

        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        }
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> codigo;
    }

    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
