#include <stdio.h>
#include <math.h>

int main() {
    
    double fahrenheit;
    scanf("%lf", &fahrenheit);
    
    double celsius = ((fahrenheit-32)/1.8);
    printf("%.2lf \n", celsius);
    
	return 0;
}