#include <stdio.h>
#include <string.h>


int main ()
{
    int N, i;
    double A, B, C, media;

    printf ("Quantos casos voce vai digitar? ");
    scanf ("%d", &N);


    for (i = 0; i < N; i++)
    {
        printf("Digite tres numeros:\n");
        scanf ("%lf", &A);
        scanf ("%lf", &B);
        scanf ("%lf", &C);
        media = ((A * 2)+(B * 3)+(C * 5)) / 10;
        printf ("MEDIA = %.1lf\n", media);
            }


    return 0;
}