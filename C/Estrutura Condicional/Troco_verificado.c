#include <stdio.h>
#include <string.h>



int main ()
{

    double preco, din, valor, falta, troco;
    int qtde;

    printf ("Preco unitario do produto: ");
    scanf ("%lf", &preco);
    printf ("Quantidade comprada: ");
    scanf ("%d", &qtde);
    printf ("Dinheiro recebido: ");
    scanf ("%lf", &din);

    valor = preco * qtde;
    troco = 0;
    falta = 0;

    if (valor > din)
    {
        falta = valor - din;
        printf ("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
    }
    else
    {
        troco = din - valor;
        printf ("TROCO = %.2lf\n", troco);
    }



    return 0;

}