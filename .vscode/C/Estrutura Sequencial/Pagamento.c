#include <stdio.h>
#include <string.h>



    int main ()
    {

        int hora;
        char nome[50];
        double valor, pagamento;

        printf ("Nome: ");
        gets (nome);
        printf ("Valor por hora: ");
        scanf ("%lf", &valor);
        printf ("Horas trabalhadas: ");
        scanf ("%d", &hora);

        pagamento = valor * hora;

        printf ("O pagamento para %s deve ser %.2lf\n", nome, pagamento);


        return 0;

    }