#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int M, i, j;

    cout << "Qual a ordem da matriz? ";
    cin >> M;

    int mat[M][M];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    int soma = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (j > i)
            {
                soma = soma + mat[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}