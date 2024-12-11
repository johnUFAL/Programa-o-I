#include <stdio.h>
#include <math.h>

int main() {
    
    float notaA, notaB, notaC;
    scanf("%f %f %f", &notaA, &notaB, &notaC);
    
    float mediaP = (((notaA*2)+(notaB*3)+(notaC*5))/(2+3+5));
    printf("MEDIA = %.1f", mediaP);
    
	return 0;
}