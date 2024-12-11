#include <stdio.h>

int bissexto (int ano1)
{   
   return (ano1%4==0 && (ano1%100!=0 || ano1%400==0));
}

void search(int ano1, int ano2)
{
    if (ano1 > ano2)
    {
        return;
    }

    if (bissexto(ano1))
    {
        printf("%d\n", ano1);
    }   
    
    search(ano1+1, ano2);

}

int main() { 

    int ano1, ano2;

    scanf("%d", &ano1);
    scanf("%d", &ano2);
    
    search(ano1, ano2);

    if (ano1 > ano2 || (!bissexto(ano1) && !bissexto(ano2) && ano1 < ano2))
    {
        printf("%d\n", -1);
    }

    return 0;
}
