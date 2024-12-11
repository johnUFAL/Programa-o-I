#include <stdio.h>
#include <math.h>

int main() {

    double via, veiculo; 

    scanf("%lf\n%lf", &via, &veiculo);

    if (veiculo > via && veiculo <= ((0.2*via)+via))
    {
        printf("%.2lf\n%d", 85.13, 4);
    }
    else if ((0.2*via)+via < veiculo && veiculo <= ((0.5*via)+via))
    {
        printf("%.2lf\n%d", 127.69, 5);
    }
    else if (veiculo > ((0.5*via)+via))
    {
        printf("%.2lf\n%d", 574.62, 7);
    }
    else if (veiculo <= via)
    {
        printf("%.2lf\n%d", 0.00, 0);
    }
    
    
    return 0;

}