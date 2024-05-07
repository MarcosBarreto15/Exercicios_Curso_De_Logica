#include <stdio.h>
#include <string.h>



int main ()
{

    double A, B, C, areaQ, areaT, areaTr;

    printf ("Digite a medida A: ");
    scanf ("%lf", &A);
    printf ("Digite a medida B: ");
    scanf ("%lf", &B);
    printf ("Digite a medida C: ");
    scanf ("%lf", &C);

    areaQ = pow(A, 2);
    areaT = (A * B)/2;
    areaTr = ((A + B)*C)/2;


    printf ("AREA DO QUADRADO = %.4lf\n", areaQ);
    printf ("AREA DO TRIANGULO = %.4lf\n", areaT);
    printf ("AREA DO TRAPEZIO = %.4lf\n", areaTr);




    return 0;

}