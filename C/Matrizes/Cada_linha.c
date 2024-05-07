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
    int M, i, j, maior;

    printf ("Qual a ordem da matriz? ");
    scanf("%d", &M);

    int mat[M][M];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    int maiorElemento[M];

    printf("\nMAIOR ELEMENTO DE CADA LINHA:\n");

    for (i = 0; i < M; i++)
    {
        maior = mat[i][0];
        for (j = 1; j < M; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
        maiorElemento[i] = maior;
    }

    for (i = 0; i < M; i++)
    {
        printf ("%d\n", maiorElemento[i]);
    }

    return 0;
}