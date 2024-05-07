#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i, pares, posicao;
    double maior;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    }

    maior = 0;

    for (i = 0; i < N; i++){
        if (vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }
    printf ("\nMAIOR VALOR = %.1lf\n", maior);
    printf ("POSICAO DO MAIOR VALOR = %d\n", posicao);


    return 0;
}
