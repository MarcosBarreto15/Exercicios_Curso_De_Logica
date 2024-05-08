#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int idades, soma, cont;
    double media;

    cout << "Digite as idades: " << endl;
    cin >> idades;

    if (idades < 0)
    {
        cout << "IMPOSSIVEL CALCULAR";
    }
    else
    {
        cont = 0;
        soma = 0;
        while (idades >= 0)
        {
            cont++;
            soma = soma + idades;
            cin >> idades;
        }
        media = (double)soma / cont;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}