#include <stdio.h>




int main ()
{

    double a, b, c, x1, x2, delta;

    printf ("Coeficiente a: ");
    scanf ("%lf", &a);
    printf ("Coeficiente b: ");
    scanf ("%lf", &b);
    printf ("Coeficiente c: ");
    scanf ("%lf", &c);

    delta = pow(b,2) - 4 * a * c;

    if (a == 0 || delta < 0 ){
        printf ("Esta equacao nao possui raizes reais");
    }
    else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }



    return 0;
}