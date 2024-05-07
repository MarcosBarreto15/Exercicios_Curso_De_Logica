#include <stdio.h>
#include <string.h>


int main ()
{

    int N, i;


    printf ("Quantas pessoas serao digitadas? ");
    scanf ("%d", &N);

    int vet[N];
    char nome[N][50];
    int idade[N];


    for (i = 0; i < N; i++)
    {
        printf ("Dados da %da pessoa\n", i + 1);
        printf ("Nome: ");
        fseek (stdin, 0, SEEK_END);
        gets(nome[i]);
        printf ("Idade: ");
        scanf ("%d", &idade[i]);

    }


    int maior = idade[0];
    int maisVelho = 0;

    for (i = 1; i < N; i++)
    {
        if (idade[i] > maior)
        {
            maior = idade[i];
            maisVelho = i;
        }
    }
    
    printf ("PESSOA MAIS VELHA: %s\n", nome[maisVelho]);



    return 0;
}