#include <stdio.h>

int main() 
{

    double ladoA, ladoB, ladoC;

    scanf("%lf\n%lf\n%lf", &ladoA, &ladoB, &ladoC);

    if (ladoA + ladoB >= ladoC && ladoA + ladoC >= ladoB && ladoB + ladoC >= ladoA)
    {
        if (ladoA == ladoB && ladoB == ladoC)
        {
            printf("equilatero");
        }
         else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC)
        {
            printf("escaleno");
        }
        else
            printf("isosceles");  

    }
    return 0;
}