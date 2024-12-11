#include <stdio.h>
#include <math.h>

int main() {
    
    int funcionario, horas;
    float horaXtrabalho; 
    scanf("%d %d %f", &funcionario, &horas, &horaXtrabalho);
    
    float salario = horas*horaXtrabalho;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = R$ %.2f", salario);
    
	return 0;
}