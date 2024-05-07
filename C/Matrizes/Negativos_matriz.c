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
    int M, N, i, j;

    printf ("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("VALORES NEGATIVOS:\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                printf ("%d\n", mat[i][j]);
            }
        }
    }


    return 0;
}