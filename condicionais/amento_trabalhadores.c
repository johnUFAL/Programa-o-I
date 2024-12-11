#include <stdio.h>
#include <math.h>

int main() {

    double salario, aumento;

    scanf("%lf", &salario);

    if (salario >= 500.00)
    {
        aumento = salario + ((salario*10)/100);
        printf("%.2lf", aumento);
    }
    else if (salario >= 300.00 && salario < 500.00)
    {
        aumento = salario + ((salario*7)/100);
        printf("%.2lf", aumento);
    }
    else
    {
        aumento = salario + ((salario*5)/100);
        printf("%.2lf", aumento);
    }

return 0;

}