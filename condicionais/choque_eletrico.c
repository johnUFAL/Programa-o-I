#include <stdio.h>
#include <math.h>

int main(){

    int lvl, choque; 

    scanf("%d", &lvl);

if (lvl >= 1 && lvl <=20)
{
    choque = 20 + pow(lvl, 3);
    printf("Potencia de : %d W", choque);
}
else if (lvl >= 21 && lvl <= 40)
{
    choque = 8000 + pow((lvl-10), 2);
    printf("Potencia de : %d W", choque);
}
else if (lvl >= 41 && lvl <= 60)
{
    choque = 9000 + (5*lvl);
    printf("Potencia de : %d W", choque);
}
else if (lvl >= 61 & lvl <= 80)
{
    choque = 9300 + (2*lvl);
    printf("Potencia de : %d W", choque);
}
else if (lvl >=81 && lvl <= 100)
{
    choque = 9500 + lvl;
    printf("Potencia de : %d W", choque);
}

return 0; 
}