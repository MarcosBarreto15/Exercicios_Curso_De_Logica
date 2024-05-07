#include <stdio.h>
#include <string.h>



int main ()
{
    char resp;
    double f, c;

    printf ("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf ("%c",&resp);


    if (resp == 'F')
    {
        printf ("Digite a temperatura em Fahrenheit: ");
        scanf ("%lf", &f);
        c = (f - 32) / 1.8;
        printf ("Temperatura equivalente em Celsius: %.2lf\n", c);

    }
    else
    {
        printf ("Digite a temperatura em Celsius: ");
        scanf ("%lf", &c);
        f = c * 9 / 5 + 32;
        printf ("Temperatura equivalente em Fahrenheit: %.2lf\n", f);

    }


    return 0;
}