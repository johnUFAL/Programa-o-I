#include <stdio.h>

int somaalg(int num)
{
    if (num == 0 ) //0%10 = 0 e 0/10=0
    {
        return 0;
    }
        return (num%10) + somaalg(num/10); //usa o restonda div pra quebrar os alfaridmod e depois soma 
    
}

int main() {

    int num;

    scanf("%d", &num);

    printf("%d", somaalg(num));

    return 0;
}