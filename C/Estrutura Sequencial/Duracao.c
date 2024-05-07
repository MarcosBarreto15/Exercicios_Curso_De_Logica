#include <stdio.h>
#include <string.h>



int main ()
{
    int duracao;
    int hr, min, seg;

    printf ("Digite a duracao em segundos: ");
    scanf ("%d", &duracao);

    hr = duracao/3600;
    min = (duracao % 3600)/ 60;
    seg = (duracao % 3600) % 60;

    printf ("%d:%d:%d\n", hr, min, seg);






    return 0;

}