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
    printf ("Quantas pessoas serao digitadas? ");
    scanf ("%d", &N);

    double altura[N];
    char genero[N];

    for (i = 0; i < N; i++)
    {
        printf ("Altura da %da pessoa: ", i + 1 );
        scanf ("%lf", &altura[i]);
        printf ("Genero da %da pessoa: ", i + 1 );
        limpar_entrada();
        scanf ("%c", &genero[i]);
    }
    double menor = altura[0];

    for (i = 0; i < N; i++)
    {
        if (altura[i] < menor)
        {
            menor = altura[i];
        }
    }

    printf ("Menor Altura = %.2lf\n", menor);

    double maior = altura[0];

    for (i = 0; i < N; i++)
    {
        if (altura[i] > maior)
        {
            maior = altura[i];
        }
    }

    printf ("Maior Altura = %.2lf\n", maior);

    double somaF = 0;
    int contF = 0;
    int contM = 0;

    for (i = 0; i < N; i++)
    {
        if (genero[i] == 'F')
        {
            somaF = somaF + altura[i];
            contF = contF + 1;
        }
        else if (genero[i] == 'M')
        {
            contM = contM + 1;
        }
    }

    double mediaF = somaF / contF;

    printf("Media de altura das mulheres = %.2lf\n", mediaF);
    printf ("Numero de homens: %d\n", contM);



    return 0;
}