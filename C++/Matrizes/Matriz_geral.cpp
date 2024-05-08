#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int M, i, j, linha, coluna;

    cout << "Qual a ordem da matriz? ";
    cin >> M;

    double mat[M][M];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    double somaPositivos = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (mat[i][j] > 0)
            {
                somaPositivos = somaPositivos + mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSIVITOS: " << somaPositivos << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linha;

    cout << "LINHA ESCOLHIDA: ";

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (linha == i)
            {
                cout << mat[i][j] << "  ";
            }
        }
    }

    cout << endl;
    cout << endl << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA ESCOLHIDA: ";

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (coluna == j)
            {
                cout << mat[i][j] << "  ";
            }
        }
    }

    cout << endl;
    cout << endl << "DIAGONAL PRINCIPAL: ";

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i == j)
            {
                cout << mat[i][j] << "  ";
            }
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (mat[i][j] < 0)
            {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    cout << endl;
    cout << endl << "MATRIZ ALTERADA: " << endl;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
                cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}