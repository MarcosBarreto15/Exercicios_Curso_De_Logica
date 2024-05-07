#include <stdio.h>
#include <string.h>



int main ()
{

    int N, i, contIdades;
    double somaAltura, alturaMedia, porcentagem;


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for (i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa\n", i + 1);
        printf ("Nome: ");
        fseek (stdin, 0, SEEK_END);
        gets(nome[i]);
        printf ("Idade: ");
        scanf ("%d", &idade[i]);
        printf ("Altura: ");
        scanf ("%lf", &altura[i]);
    }

    somaAltura = 0;
    for (i = 0; i < N; i++){
        somaAltura = somaAltura + altura[i];
    }

    alturaMedia = somaAltura/N;

    printf ("\nAltura mehdia: %.2lf", alturaMedia);

    contIdades = 0;

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            contIdades = contIdades + 1;
        }
    }
    porcentagem = (double)contIdades * 100 / N;
    printf("\nPessoas com menos de 16 anos: %.1lf %%\n", porcentagem );

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            printf ("%s\n", nome[i]);
        }
    }



    return 0;
}