#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta,r_delta, raiz_1, raiz_2;

    scanf("%f\n%f\n%f", &a, &b, &c);        
    
    delta = (pow(b, 2))-(4*a*c);
    r_delta = sqrt(delta);

    if (a != 0)
    {
        if (delta >= 0)
        {
            raiz_1 = (-b+r_delta)/(2.0*a);
            raiz_2 = (-b-r_delta)/(2.0*a);

            printf("%.2f\n%.2f", raiz_1, raiz_2);
        }   
        else if (delta < 0)
        {
            printf("NRR");
        }
    }
    else if ( a == 0)
    {
        printf("NEESG");
    } 

return 0;

}