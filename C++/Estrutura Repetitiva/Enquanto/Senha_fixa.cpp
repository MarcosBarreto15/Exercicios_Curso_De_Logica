#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while (senha != 2002)
    {
        cout << "Senha invalida! Tente novamente: ";
        cin >> senha;
    }

    cout << "Acesso permitido!" << endl;

    return 0;
}
