#include <stdio.h>
#include <string.h>



int main ()
{
    int i, x, soma;

    printf ("Digite o valor de X: ");
    scanf ("%d", &x);

    for (i = 0; i < x; i++)
    {
        i = i + 1;
        if (i % 2 != 0);
        printf ("%d\n", i);
    }


    return 0;
}