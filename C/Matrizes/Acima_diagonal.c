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

    int M, i, j;

    printf ("Qual a ordem da matriz? ");
    scanf("%d", &M);

    int mat[M][M];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Elemento [%d,%d]: ",i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    int soma = 0;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if(j > i)
            {
                soma = soma + mat[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n",soma);



    return 0;
}