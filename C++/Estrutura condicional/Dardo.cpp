#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double distancia, maiorDistancia, a, b, c;

    cout << "Digite as tres distancias: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c)
    {
        maiorDistancia = a;
    }
    else if (b > c)
    {
        maiorDistancia = b;
    }
    else
    {
        maiorDistancia = c;
    }

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maiorDistancia << endl;

    return 0;
}