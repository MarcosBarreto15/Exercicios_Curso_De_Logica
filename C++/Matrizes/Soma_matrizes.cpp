#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int M, N, i, j;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> M;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> N;

    int A[M][N], B[M][N], C[M][N];

    cout << "Digite os valores da matriz A: " << endl;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B: " << endl;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "MATRIZ SOMA: " << endl;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << C[i][j] << "  ";
        }

        cout << endl;
    }

    return 0;
}