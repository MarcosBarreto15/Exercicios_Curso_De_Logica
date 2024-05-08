#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double preco, dinheiro, troco, valorTot, falta;
    int qtde;

    cout << "Preco unitario do produto:";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtde;
    cout << "Dinhheiro recebido: ";
    cin >> dinheiro;

    valorTot = preco * qtde;

    cout << fixed << setprecision(2);
    if (dinheiro < valorTot)
    {
        falta = valorTot - dinheiro;

        cout << "DINHEIRO INSUFICIENTE, FALTAM " << falta << " REAIS" << endl;
    }
    else
    {
        troco = dinheiro - valorTot;
        cout << "TROCO = " << troco << endl;
    }

    return 0;
}