#include <stdio.h>

int main(){

    int estudante, idoso, entrada;

    scanf("%d\n%d", &estudante, &idoso);

    if (estudante == 1 || idoso == 1)
    {
        entrada = 1;
        printf("%d", entrada);
    }
    else
    {
        entrada = 0;
        printf("%d", entrada);
    }

    return 0;

}  