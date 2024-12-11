#include <stdio.h> 
#include <math.h>

int main() {

    float valorGasto;

    scanf("%f", &valorGasto);
    
    printf("%.2f", valorGasto + ((valorGasto*10)/100));

    return 0; 
}