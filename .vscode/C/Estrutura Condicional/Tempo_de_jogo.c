#include <stdio.h>
#include <string.h>



int main ()
{

    int hi, hf, duracao;

    printf ("Hora inicial: ");
    scanf ("%d", &hi);
    printf ("Hora final: ");
    scanf ("%d", &hf);

    if (hi > hf)
    {
        duracao = 24 - hi + hf;
    }
    else if (hi == hf)
        {
            duracao = 24;
        }
    else
    {
        duracao = hf - hi;
    }

    printf ("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}