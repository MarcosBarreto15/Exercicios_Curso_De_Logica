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

    double b, h, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf ("%lf", &b);
    printf("Altura do retangulo: ");
    scanf ("%lf", &h);

    area = b * h;
    perimetro = 2 * (b + h);
    diagonal = sqrt (pow(b, 2) + pow(h, 2));

    printf ("AREA = %.4lf\n", area);
    printf ("PERIMETRO = %.4lf\n", perimetro);
    printf ("DIAGONAL = %.4lf\n", diagonal);


    return 0;
}