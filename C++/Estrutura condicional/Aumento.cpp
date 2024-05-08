#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double salario, aumento, novoSal;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if (salario <= 1000.00)
    {
        porcentagem = 20;
    }
    else if (salario <= 3000.00)
    {
        porcentagem = 15;
    }
    else if (salario <= 8000.00)
    {
        porcentagem = 10;
    }
    else
    {
        porcentagem = 5;
    }

    novoSal = salario + (salario * porcentagem / 100);
    aumento = novoSal - salario;

    cout << "Novo salario = R$ " << fixed << setprecision(2) << novoSal << endl;
    cout << "Aumento  = R$ " << fixed << setprecision(2) << aumento << endl;
    cout << "Porcentagem = " << porcentagem << " %" << endl;
    return 0;
}