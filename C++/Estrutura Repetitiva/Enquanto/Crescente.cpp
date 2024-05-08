#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int x, y;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    while (x != y)
    {
        if (x > y)
        {
            cout << "DECRESENTE! " << endl;
        }
        else
        {
            cout << "CRESENTE!" << endl;
        }
        cout << "Digite outros dois numeros: " << endl;
        cin >> x;
        cin >> y;
    }

    return 0;
}