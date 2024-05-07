#include <stdio.h>
#include <string.h>



int main ()
{
    int codigo, qtde;
    double valor, valorPagar;

    printf ("Codigo do produto comprado: ");
    scanf ("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf ("%d", &qtde);

    switch(codigo)
    {
    case 1:
        valor = 5.00;
        break;
    case 2:
        valor = 3.50;
        break;
    case 3:
        valor = 4.80;
        break;
    case 4:
        valor = 8.90;
        break;
    case 5:
        valor = 7.32;
        break;
    }


    valorPagar = valor * qtde;

    printf ("Valor a pagar: R$ %.2lf\n", valorPagar);


    return 0;
}