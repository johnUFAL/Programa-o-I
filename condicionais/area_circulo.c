#include <stdio.h> 
#include <math.h> 

int main() {

    double raio, potencia, area; 

    scanf("%lf", &raio);

    potencia = pow(raio, 2);
    area = ((potencia*3.14159)/10000.00);

    printf("Area = %.4lf", area);

    return 0;

}