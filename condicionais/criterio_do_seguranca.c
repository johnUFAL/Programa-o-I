#include <stdio.h>

int main(){

    int sexo, idade, seguro;

    scanf("%d\n%d", &sexo, &idade);

    if (idade == 1 && sexo == 0)
    {
        seguro = 1;
        printf("%d", seguro);
    }
    else
    {
        seguro = 0;
        printf("%d", seguro);
    }

    return 0;

}  