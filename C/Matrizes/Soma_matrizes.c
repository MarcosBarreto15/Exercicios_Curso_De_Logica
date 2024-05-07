#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main ()
{

    int N, M, i, j;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf ("%d", &M);
    printf ("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &N);

    int matA[M][N], matB[M][N], matC[M][N];

    printf ("Digite os valores da matriz A:\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento[%d,%d]: ", i, j);
            scanf ("%d", &matA[i][j]);
        }
    }

    printf ("Digite os valores da matriz B:\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento[%d,%d]: ", i, j);
            scanf ("%d", &matB[i][j]);
        }
    }

    printf("MATRIZ SOMA:\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

        for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d  ", matC[i][j]);
        }
        printf("\n");
    }


    return 0;
}