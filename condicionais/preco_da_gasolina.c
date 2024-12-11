#include <stdio.h>
#include <stdlib.h>

int main() {

    char gasosa;
    double litro, preco, valor, desc = 0;

    scanf("%lf", &litro);
    scanf("\n");
    gasosa = getchar();

    switch (gasosa)
    {
    case 'A':

        valor = 1.90;

        if (litro > 20.00)
        {
            desc = 0.05;
        }
        else
        {
            desc = 0.03;
        }
        break;

    case 'G':

        valor = 2.50;

        if (litro > 20.00)
        {
            desc = 0.06;
        }
        else
        {
            desc = 0.04;
        }
        break;

    case 'D':

        valor = 1.66;

        if ( litro > 25.00)
        {
            desc = 0.04;
        }
        else
        {
            desc = 0.00;
        }
        break;
    }

    preco = litro*valor*(1.00-desc);
    
    printf( "R$ %.2lf", preco);

    return 0;
}