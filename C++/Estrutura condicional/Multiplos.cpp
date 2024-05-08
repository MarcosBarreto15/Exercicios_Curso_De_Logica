#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int n1, n2;

    cout << "Digite dois numeros inteiros: " << endl;
    cin >> n1;
    cin >> n2;

    if (n1 % n2 == 0 || n2 % n1 == 0)
    {
        cout << "Sao multiplos";
    }
    else
    {
        cout << "Nao sao multiplos";
    }
    return 0;
}