#include <stdio.h>
#include <string.h>



int main ()
{

    double preco, valor, troco;
    int qtde;

    printf ("Preço unitario do produto: ");
    scanf ("%lf", &preco);
    printf ("Quantidade comprada:");
    scanf ("%d", &qtde);
    printf ("Dinheiro recebido: ");
    scanf ("%lf", &valor);

    troco = valor - (preco * qtde);

    printf ("TROCO = %.2lf\n", troco);

    return 0;
}