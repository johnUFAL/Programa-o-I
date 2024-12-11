#include <stdio.h>
#include <math.h>

int main(){

    int livro, crianca = 0; 
    float conceito;

    scanf("%d\n%d", &livro, &crianca);  

    conceito = (float) crianca/livro; 

    if (conceito <= 8.0 )
    {
        printf("A");
    }
    else if (conceito >= 9.0 && conceito <= 12.0 )
    {
        printf("B");
    }
    else if (conceito >= 13.0 && conceito <=18.0)
    {
        printf("C");
    }
    else if (conceito > 18.0)
    {
        printf("D");
    }
    
    return 0;
}