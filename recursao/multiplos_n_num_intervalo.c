#include <stdio.h>

void multiplo(int n, int a, int b, int num, int *search)
{

    if (num > b)
    {
        return;
    }

    if (num%n==0)
    {
        printf("%d\n", num);
        *search=1;
    }

    multiplo(n, a, b, num+1, search);
}

int main() {

    int a, b, n, search = 0;

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    
    multiplo(n, a, b, a, &search);

    if (!search) //se for falso
    {
        printf("INEXISTENTE");
    }

    return 0;
}