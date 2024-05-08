#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int duracao, hr, min, seg;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    hr = duracao / 3600;
    min = (duracao % 3600) / 60;
    seg = (duracao % 3600) % 60;

    cout << hr << ":" << min << ":" << seg << endl;

    return 0;
}