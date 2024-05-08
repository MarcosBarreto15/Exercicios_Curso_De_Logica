#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

        double media, nota1, nota2;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    while (nota1 < 0 || nota1 > 10)
    {
        cout << "Valor invalido! Tente novamente: " << endl;
        cout << "Digite a primeira nota: ";
        cin.ignore(INT_MAX, '\n');
        cin >> nota1;
    }
    cout << "Digite a segunda nota: ";
    cin.ignore(INT_MAX, '\n');
    cin >> nota2;
    while (nota2 < 0 || nota2 > 10)
    {
        cout << "Valor invalido! Tente novamente: " << endl;
        cout << "Digite a segunda  nota: ";
        cin.ignore(INT_MAX, '\n');
        cin >> nota2;
    }

    media = (double)(nota1 + nota2) / 2;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media << endl;

    return 0;
    
}
