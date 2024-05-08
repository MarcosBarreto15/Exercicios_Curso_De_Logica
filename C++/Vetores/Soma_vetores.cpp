#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, maiorPosicao;

    cout << "Quantos valores vai ter cada vetor ? ";
    cin >> N;

    int A[N], B[N], C[N];

    cout << "Digite os valores do vetor A: " << endl;

    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cout << "Digite os valores do vetor B: " << endl;

    for (i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    for (i = 0; i < N; i++)
    {
        C[i] = A[i] + B[i];
    }

    cout << "VETOR RESULTANTE: " << endl;

    for (i = 0; i < N; i++)
    {
        cout << C[i] << endl;
    }

    return 0;
}