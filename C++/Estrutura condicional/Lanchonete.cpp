#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int codigo, qtde;
    double valor, preco;

    cout << "Codigo do protudo: ";
    cin >> codigo;
    cout << "Quantidade comprada:";
    cin >> qtde;

    switch (codigo)
    {
    case 1:
        preco = 5.00;
        break;

    case 2:
        preco = 3.50;
        break;

    case 3:
        preco = 4.80;
        break;

    case 4:
        preco = 8.90;
        break;

    case 5:
        preco = 7.32;
        break;
    }

    valor = preco * qtde;

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: " << valor << endl;

    return 0;
}