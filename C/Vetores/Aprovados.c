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


    printf ("Quantos alunos serao digitadas? ");
    scanf ("%d", &N);


    char nome[N][50];
    double nota1[N], nota2[N], media[N];


    for (i = 0; i < N; i++)
    {
        printf ("Digite o nome, primeira nota e segunda nota do %do aluno\n", i + 1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        scanf ("%lf",&nota1[i]);
        scanf("%lf", &nota2[i]);
    }

    for (i = 0; i < N; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    printf ("Alunos aprovados:\n");

    for (i = 0; i < N; i++)
    {
        if (media[i] >= 6.0 )
        {
            printf ("%s\n", nome[i]);
        }
    }


    return 0;
}