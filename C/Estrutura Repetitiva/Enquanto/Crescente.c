#include <stdio.h>




int main ()
{

    int x, y;

    printf ("Digite dois numeros:\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    while (x != y)
    {
        if (x < y)
        {
            printf ("CRESCENTE");
        }
        else
        {
            printf ("DECRESCENTE");
        }
        printf ("\n");
        printf ("Digite dois numeros:\n");
        scanf ("%d", &x);
        scanf ("%d", &y);
    }



    return 0;
}