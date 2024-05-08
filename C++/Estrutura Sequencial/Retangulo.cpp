#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double b, a, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> b;

    cout << "Altura do retangulo: ";
    cin >> a;

    area = b * a;
    perimetro = 2 * (b + a);
    diagonal = sqrt(pow(b, 2.0) + pow(a, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}