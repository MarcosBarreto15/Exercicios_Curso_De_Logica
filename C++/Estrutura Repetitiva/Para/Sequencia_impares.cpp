#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int x, i;

    cout << "Digite o valor de X: ";
    cin >> x;

    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}