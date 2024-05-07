#include <stdio.h>




int main ()
{

    int idade, soma, cont;
    double media;

    printf ("Digite as idades:\n");
    scanf ("%d", &idade);

    cont = 0;
    soma = 0;
    while (idade > 0)
    {
        cont = cont + 1;
        soma = soma + idade;
        scanf ("%d", &idade);
    }

    if (cont == 0)
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
        media = (double)soma/cont;
        printf ("MEDIA = %.2lf", media);
    }



    return 0;
}