#include <stdio.h>
#include <string.h>



int main ()
{

    double combustivel, consumo;
    int distancia;

    printf ("Distancia percorrida: ");
    scanf ("%d", &distancia);
    printf ("Combustivel gasto: ");
    scanf ("%lf", &combustivel);

    consumo = (double)distancia / combustivel;

    printf ("Consumo medio = %.3lf\n", consumo);




    return 0;

}