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

    int maiorElemento[M];

    for (i = 0; i < M; i++)
    {
        int maior = mat[i][0];
        for (j = 0; j < M; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
        maiorElemento[i] = maior;
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA: " << endl;

    for (i = 0; i < M; i++)
    {
        cout << maiorElemento[i] << endl;
    }

    return 0;
}