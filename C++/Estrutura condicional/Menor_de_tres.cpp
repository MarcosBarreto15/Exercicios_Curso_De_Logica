#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int a, b, c, menor;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }

    cout << "MENOR = " << menor;

    return 0;
}