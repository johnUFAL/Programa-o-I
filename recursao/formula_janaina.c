#include <stdio.h>
#include <math.h>

void expressao (int a, int b, int conta)
{
    if (a > b) return;
    
    conta = (pow(a, 2) - (4*a) + 5);
    printf("%d\n", conta);
    expressao(a+1, b, conta);
}

int main() {

    int a, b, conta;

    scanf("%d\n%d", &a, &b);

    expressao(a, b, conta);

    return 0;
}