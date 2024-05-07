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

    int M, i, j, linha, coluna;

    printf ("Qual a ordem da matriz? ");
    scanf("%d", &M);

    double mat[M][M];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Elemento [%d,%d]: ",i, j);
            scanf ("%lf", &mat[i][j]);
        }
    }

    double somaPositivos = 0;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if(mat[i][j] > 0)
            {
                somaPositivos = somaPositivos + mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSIVITOS = %.1lf\n",somaPositivos);

    printf("\nEscolha uma linha: ");
    scanf ("%d", &linha);
    printf ("LINHA ESCOLHIDA: ");

    for (i = 0; i < M; i++)
    {
        printf("%.1lf  ", mat[linha][i]);
    }

    printf ("\n");
    printf ("\nEscolha uma coluna: ");
    scanf ("%d", &coluna);
    printf ("COLUNA ESCOLHIDA: ");

    for (i = 0; i < M; i++)
    {
        printf("%.1lf  ", mat[i][coluna]);
    }

    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if(i == j)
            {
                printf ("%.1lf  ", mat[i][j]);
            }
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if(mat[i][j] < 0)
            {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    printf ("\n");
    printf ("\nMATRIZ ALTERADA:\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            {
                printf("%.1lf  ", mat[i][j]);
            }
        }
        printf ("\n");
    }


    return 0;
}