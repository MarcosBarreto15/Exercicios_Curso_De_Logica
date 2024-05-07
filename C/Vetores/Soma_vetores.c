#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i;

    printf ("Quantos valores vai ter cada vetor? ");
    scanf ("%d", &N);


    printf ("Digite os valores do vetor A:\n");

    int vetA[N], vetB[N], vetC[N];

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &vetA[i]);
    }

    printf ("Digite os valores do vetor B:\n");

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &vetB[i]);
    }

    printf ("VETOR RESULTANTE:\n");

    for (i = 0; i < N; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
        printf ("%d\n", vetC[i]);
    }


    return 0;
}