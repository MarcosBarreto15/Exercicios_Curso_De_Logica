#include <stdio.h>
#include <string.h>



int main ()
{
    double valor, excedente;
    int minutos;

    printf ("Digite a quantidade de minutos: ");
    scanf ("%d", &minutos);

    valor = 50;

            if (minutos > 100)
    {
        excedente = (minutos - 100) * 2;
        valor = 50 + excedente;
    }

    printf ("Valor a pagar: R$ %.2lf\n", valor);



    return 0;

}