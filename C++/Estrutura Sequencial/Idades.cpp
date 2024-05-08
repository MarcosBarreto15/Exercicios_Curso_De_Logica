#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa " << endl;
    cin.ignore(INT_MAX, '\n');
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (double)(idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A media de idade de " << nome1 << " e " << nome2 << " eh de " << media << " anos " << endl;

    return 0;
}