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

    for (i = 0; i - M; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << "Elemento [ " << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL: " << endl;

    for (i = 0; i - M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i == j)
            {
                cout << mat[i][j] << "  ";
            }
        }
    }

    int cont = 0;

    for (i = 0; i - M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (mat[i][j] < 0)
            {
                cont++;
            }
        }
    }

    cout << endl << "QUANTIDADE DE NEGATIVOS = " << cont << endl;


    return 0;
}