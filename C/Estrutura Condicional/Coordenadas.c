#include <stdio.h>
#include <string.h>



int main ()
{

    double x, y;

    printf("Valor de X: ");
    scanf ("%lf", &x);
    printf ("Valor de Y: ");
    scanf ("%lf", &y);

    if (x > 0 && y > 0 )
    {
        printf ("Q1\n");
    }
    else if (x < 0 && y > 0 )
    {
        printf ("Q2\n");
    }
    else if (x < 0 && y < 0 )
    {
        printf ("Q3\n");
    }
    else if (x > 0 && y < 0 )
    {
        printf ("Q4\n");
    }
    else if (x == 0 && y == 0 )
    {
        printf ("Origem\n");
    }
    else if (x == 0)
    {
        printf ("Eixo y\n");
    }
    else
    {
        printf ("Eixo x\n");
    }

    return 0;
}