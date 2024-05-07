#include <stdio.h>
#include <string.h>



int main ()
{
    int x, cont, soma;

    printf ("Digite um numero inteiro:");
    scanf ("%d", &x);

    while (x != 0 )
    {
        if (x % 2 != 0)
        {
            x = x + 1;
        }
        cont = 1;
        soma = x;
        while (cont <= 4)
        {
            x = x + 2;
            soma = soma + x;
            cont = cont + 1;
        }
        printf ("SOMA = %d\n", soma);
        printf ("Digite um numero inteiro:");
        scanf ("%d", &x);
    }




    return 0;
}