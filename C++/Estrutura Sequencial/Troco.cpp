#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double preco, dinheiro, troco, valorTot;
    int qtde;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtde;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    valorTot = (double)preco * qtde;
    troco = dinheiro - valorTot;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}