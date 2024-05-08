#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int cont, soma, x;

    cout << "Digite um numero inteiro: ";
    cin >> x;
    while (x != 0)
    {
        if (x % 2 != 0)
        {
            x = x + 1;
        }
        cont = 1;
        soma = x;
        while (cont <= 4)
        {
            x = x + 2;
            soma = soma + x;
            cont = cont + 1;
        }
        cout << "SOMA = " << soma << endl;
        cout << "Digite um numero inteiro: ";
        cin >> x;
    }

    return 0;
}
