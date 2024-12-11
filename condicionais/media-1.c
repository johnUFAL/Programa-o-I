#include <stdio.h>
#include <math.h>

int main() {

    double notaUm, notaDois;
    
    scanf("%lf %lf", &notaUm, &notaDois);

    notaUm = notaUm*3.50;
    notaDois = notaDois*7.50;
    
    double media = ((notaUm + notaDois)/11); 
    printf("MEDIA = %.5lf", media); 

    return 0; 
}