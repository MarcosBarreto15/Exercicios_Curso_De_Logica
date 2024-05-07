#include <stdio.h>
#include <string.h>



int main ()
{
    double salario, aumento, novoSal;
    int porcentagem;

    printf ("Digite o salario da pessoa: ");
    scanf ("%lf", &salario);

    if (salario <= 1000.00)
    {
        porcentagem = 20;
    }
    else if (salario <= 3000.00)
    {
        porcentagem = 15;
    }
    else if (salario <= 8000.00)
    {
        porcentagem = 10;
    }
    else
    {
        porcentagem = 5;
    }

    novoSal = salario + (salario * porcentagem / 100);
    aumento = novoSal - salario;

    printf ("Novo salario = R$ %.2lf\n", novoSal);
    printf ("Aumento = R$ %.2lf\n", aumento);
    printf ("Porcentagem = %d %%\n", porcentagem);

    return 0;
}