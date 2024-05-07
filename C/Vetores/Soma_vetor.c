#include <stdio.h>




int main ()
{

    int N, i;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);

    double vet[N], media, soma;

    for (i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    }
    printf ("\n");
    printf ("VALORES = ");
    for (i = 0; i < N; i++)
    {
        printf ("%.1lf  ", vet[i]);
    }

    soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }

    media = soma/N;

    printf ("\n");
    printf ("SOMA = %.2lf\n", soma);
    printf ("MEDIA = %.2lf\n", media);





    return 0;
}