#include <stdio.h>
#include <string.h>


int main ()
{
    int N, i, x, dentro, fora;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);

    dentro = 0;
    fora = 0;

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf ("%d", &x);

        if (x >= 10 && x <= 20)
        {
            dentro = dentro + 1;
        }
        else
        {
            fora = fora + 1;
        }
    }

    printf ("%d DENTRO\n", dentro);
    printf ("%d FORA\n", fora);


    return 0;
}