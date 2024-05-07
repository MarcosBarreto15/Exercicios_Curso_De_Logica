#include <stdio.h>
#include <string.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}



int main ()
{

    int N, i;

    printf ("Serao digitados dados de quantos produtos? ");
    scanf ("%d", &N);
    char nome[N][50];
    double precoC[N];
    double precoV[N];

    for (i = 0; i < N; i++)
    {
        printf ("Produto %d:\n", i + 1);
        printf ("Nome: ");
        limpar_entrada();
        gets(nome[i]);
        printf ("Preco da compra: ");
        scanf ("%lf", &precoC[i]);
        printf ("Preco da venda: ");
        scanf ("%lf", &precoV[i]);
    }

    printf("\nRELATORIO:\n");

    double lucro[N];
    int lucro10 = 0;
    int lucro20 = 0;
    int lucroM20 = 0;

    for (i = 0; i < N; i++)
    {
        lucro[i] = (precoV[i] - precoC[i]) / precoC[i] * 100.0;
        if(lucro[i] < 10.0)
        {
            lucro10 = lucro10 + 1;
        }
        else if (lucro[i] < 20.0)
        {
            lucro20 = lucro20 + 1;
        }
        else
        {
            lucroM20 = lucroM20 + 1;
        }
    }

    printf("Lucro abaixo de 10%%: %d\n", lucro10);
    printf("Lucro entre 10%% e 20 %%: %d\n", lucro20);
    printf("Lucro acima de 20%%: %d\n", lucroM20);

    double somavendas = 0;
    double somacompras = 0;
    double lucroTot = 0;

    for (i = 0; i < N; i++)
    {
        somavendas = somavendas + precoV[i];
        somacompras = somacompras + precoC[i];
        lucroTot = somavendas - somacompras;
    }

    printf("Valor total de compra: %.2lf\n", somacompras);
    printf ("Valor total de venda: %.2lf\n", somavendas);
    printf("Lucro total = %.2lf\n", lucroTot);





    return 0;
}