#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if (glicose <= 100.00)
    {
        cout << "Classificacao: normal";
    }
    else if (glicose <= 140.00)
    {
        cout << "Classificacao: elevado";
    }
    else
    {
        cout << "Classificacao: diabetes";
    }
    return 0;
}