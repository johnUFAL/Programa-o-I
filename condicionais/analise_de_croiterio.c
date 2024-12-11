#include <stdio.h>
#include <math.h>

int main() {

    double salario, comprometido, limite, parcela;

    scanf("%lf\n%lf", &salario, &comprometido);

    limite = ((comprometido*100)/salario);

    if (limite < 30.00)
    {
        parcela = ((30.00 - limite)/100)*salario;
        printf("%.2lf", parcela);
    }
    else
    {
        printf("%.2lf", 0.00);
    }

    return 0;
}