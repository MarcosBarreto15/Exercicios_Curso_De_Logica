#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

        int N, i, fatorial;

    cout << "Digite o valor de N: ";
    cin >> N;
    fatorial = 1;
    for (i = N; i > 1; i--)
    {
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}