#include <stdio.h>
#include <string.h>



int main ()
{
    int A, B, troca;

    printf("Digite dois numeros inteiros:\n");
    scanf ("%d", &A);
    scanf ("%d", &B);

    if (A < B)
    {
        troca = A;
        A = B;
        B = troca;
    }

    if (A % B == 0)
    {
        printf("Sao multiplos\n");
    }
    else
    {
        printf("Nao sao multiplos\n");
    }


    return 0;
}