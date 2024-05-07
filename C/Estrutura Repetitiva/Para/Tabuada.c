#include <stdio.h>




int main ()
{

    int i, n, multiplicacao;

    printf ("Deseja a tabuada para qual valor? ");
    scanf ("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        multiplicacao = n * i;
        printf ("%d x %d = %d\n", n, i, multiplicacao);
    }

    return 0;
}