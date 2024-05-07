#include <stdio.h>
#include <string.h>



int main ()
{

    int codigo, alcool, gasolina, diesel;

    printf ("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf ("%d", &codigo);

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (codigo != 4)
    {

        switch(codigo)
        {
        case 1:
            alcool = alcool + 1;
            break;
        case 2:
            gasolina = gasolina + 1;
            break;
        case 3:
            diesel = diesel + 1;
            break;
        }
        printf ("Informe um codigo (1, 2, 3) ou 4 para parar:");
        scanf ("%d", &codigo);
    }

    printf ("Alcool: %d\n", alcool);
    printf ("Gasolina: %d\n", gasolina);
    printf ("Diesel: %d\n", diesel);



    return 0;
}