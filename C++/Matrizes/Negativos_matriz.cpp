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

    int mat[M][N];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "VALORES NEGATIVOS: " << endl;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                cout << mat[i][j] << endl;
            }
        }
    }

    return 0;
}