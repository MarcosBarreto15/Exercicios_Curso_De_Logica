#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i;

    printf ("Quantos valores vai ter o vetor? ");
    scanf ("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    }

    double soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }

    double media = soma / N;

    printf ("\nMEDIA DO VETOR = %.3lf\n", media);
    printf ("ELEMENTOS ABAIXO DA MEDIA:\n");

    for (i = 0; i < N; i++)
    {
        if (vet[i] < media)
        {
            printf ("%.1lf\n", vet[i]);
        }
    }

    return 0;
}