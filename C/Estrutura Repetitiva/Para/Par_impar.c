#include <stdio.h>
#include <string.h>


int main ()
{
    int N, i, x;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);


    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf ("%d", &x);

        if (x % 2 == 0 && x != 0)
        {
            if (x > 0)
            {
                printf ("PAR POSIVITO\n");
            }
            else
            {
                printf ("PAR NEGATIVO\n");
            }
        }
        else if (x % 2 !=0 && x != 0)
        {
            if (x > 0)
            {
                printf ("IMPAR POSITIVO\n");
            }
            else
            {
                printf ("IMPAR NEGATIVO\n");
            }
        }
        else
        {
            printf ("NULO\n");
        }
    }