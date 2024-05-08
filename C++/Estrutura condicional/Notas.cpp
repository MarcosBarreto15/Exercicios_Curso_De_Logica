#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double nota1, nota2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaFinal = nota1 + nota2;

    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << notaFinal << endl;

    if (notaFinal < 60.00)
    {
        cout << "REPROVADO";
    }

    return 0;
}