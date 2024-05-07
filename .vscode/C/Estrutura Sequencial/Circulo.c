#include <stdio.h>
#include <string.h>



int main ()
{

    double area, raio;

    printf ("Digite o valor do raio do circulo: ");
    scanf ("%lf", &raio);

    area = 3.14159 * pow(raio, 2);

    printf ("AREA %.3lf\n", area);


    return 0;


}