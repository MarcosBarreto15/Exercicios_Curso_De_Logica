#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int M, N, i, j;

    cout << "Qual a oquantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a oquantidade de colunas da matriz? ";
    cin >> N;

    double mat[M][N];

    for (i = 0; i < M; i++)
    {
        cout << "Digite os elementos da " << i + 1 << "a linha" << endl;
        for (j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }

    double soma[M];

    for (i = 0; i < M; i++)
    {
        soma[i] = 0;
        for (j = 0; j < N; j++)
        {
            soma[i] = soma[i] + mat[i][j];
        }
    }

    cout << "VETOR GERADO:" << endl;

    for (i = 0; i < M; i++)
    {
        cout << fixed << setprecision(1);
        cout << soma[i] << endl;
    }

    return 0;
}