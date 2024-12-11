#include <stdio.h>
#include <math.h>

int main() {

    int consumo, conta;

    scanf("%d", &consumo);

    if (consumo >= 0 && consumo <= 10)
    {
        printf("%d", 7);
    }
    else if (consumo >= 11 && consumo <= 30)
    {
        conta = ((consumo-10)*1)+7;
        printf("%d", conta);
    }
    else if (consumo >=31 && consumo <= 100)
    {
        conta = ((consumo - 30)*2)+27;
        printf("%d", conta);
    }
    else if (consumo >= 101 && consumo <= 1000)
    {
        conta = ((consumo - 100)*5)+167;
        printf("%d", conta);
    }

return 0;

}