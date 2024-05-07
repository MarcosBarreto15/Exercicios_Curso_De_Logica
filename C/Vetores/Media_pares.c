#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i, soma, cont;
    double media;

    printf ("Quantos elementos vai ter o vetor? ");
    scanf ("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }

    cont = 0;
    soma = 0;

    for (i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cont = cont + 1;
            soma = soma + vet[i];
        }
    }

        if (cont != 0){
        media =  (double) soma / cont;
        printf ("MEDIA DOS PARES: %.1lf\n", media);
        }
        else {
            printf ("NENHUM NUMERO PAR\n");
        }


    return 0;
}