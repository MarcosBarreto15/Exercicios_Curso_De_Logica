#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i, pares;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }


    printf ("\nNUMEROS PARES:\n");

    pares = 0;

    for (i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf ("%d  ", vet[i]);
            pares = pares + 1;
        }
    }
    printf ("\n");
    printf ("\nQUANTIDADE DE PARES = %d\n", pares);




    return 0;
}