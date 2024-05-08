#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double a, b, c, areaQ, areaTri, areaTra;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    areaQ = pow(a, 2);
    areaTri = (a * b) / 2;
    areaTra = ((a + b) * c) / 2;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQ << endl;
    cout << "AREA DO TRIANGULO = " << areaTri << endl;
    cout << "AREA DO TRAPEZIO = " << areaTra << endl;

    return 0;
}