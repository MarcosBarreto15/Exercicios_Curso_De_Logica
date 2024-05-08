#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double raio, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = 3.14159 * pow(raio, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}