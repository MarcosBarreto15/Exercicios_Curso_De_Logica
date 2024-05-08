#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    double a, b, c, media;
    int N, i;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cout << "Digite tres numeros: " << endl;
        cin >> a >> b >> c;
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    }


    return 0;
}