#include <stdio.h>
#include <string.h>


int main ()
{
    int N, i;
    double numerador, denominador,divisao;

    printf ("Quantos casos voce vai digitar? ");
    scanf ("%d", &N);


    for (i = 0; i < N; i++)
    {
        printf ("Entre com o numerador: ");
        scanf ("%lf", &numerador);
        printf ("Entre com o denominador: ");
        scanf ("%lf", &denominador);

        if (numerador == 0)
        {
            printf ("DIVISAO = 0.00\n");

        }
        else if (denominador == 0)
        {
            printf ("DIVISAO IMPOSSIVEL\n");

        }
        else
        {
            divisao = numerador / denominador;
            printf ("DIVISAO = %.2lf\n", divisao);

        }
    }


    return 0;
}