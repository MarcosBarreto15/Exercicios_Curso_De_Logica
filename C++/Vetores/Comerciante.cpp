#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Serao digitados dados de quantos produtos ? ";
    cin >> N;

    string nome[N];
    double compra[N], venda[N];

    for (i = 0; i < N; i++)
    {
        cout << "Produto " << i + 1 << ": " << endl;
        cin.ignore(INT_MAX, '\n');
        cout << "Nome: ";
        getline(cin, nome[i]);
        cout << "Preco de compra: ";
        cin >> compra[i];
        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    double lucro[N];

    int abaixo = 0;
    int entre = 0;
    int acima = 0;

    for (i = 0; i < N; i++)
    {
        lucro[i] = (venda[i] - compra[i]) / venda[i] * 100.0;
        if (lucro[i] < 10)
        {
            abaixo++;
        }
        else if (lucro[i] < 20)
        {
            entre++;
        }
        else
        {
            acima++;
        }
    }

    double totCompra = 0;
    double totVenda = 0;
    double lucroTot = 0;

    for (i = 0; i < N; i++)
    {
        totCompra = totCompra + compra[i];
        totVenda = totVenda + venda[i];
    }

    lucroTot = totVenda - totCompra;

    cout << endl;
    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%:" << abaixo << endl;
    cout << "Lucro entre 10% e 20%:" << entre << endl;
    cout << "Lucro acima de 20%:" << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totCompra << endl;
    cout << "Valor total de venda: " << totVenda << endl;
    cout << "Lucro total: " << lucroTot << endl;
    

    return 0;
}