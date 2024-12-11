#include <stdio.h>

#define MAX 100

void inverter(int tunel[], int n, int invertido[]) 
{
    for (int i = n - 1; i >= 0; i--) 
    {
        invertido[n - 1 - i] = tunel[i];
        printf("%d", tunel[i]);
        if (i > 0) printf(" ");
    }
}

void par_imp(int tunel[], int n, int parimp[]) 
{
    int j = 0;

    for (int i = 0; i < n; i += 2) 
    {
        parimp[j++] = tunel[i];
        printf("%d", tunel[i]);
        if (i + 2 < n) printf(" ");
    }

    for (int i = 1; i < n; i += 2) 
    {
        printf(" %d", tunel[i]);
        parimp[j++] = tunel[i];
    }
}

void soma(int invertido[], int parimp[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", invertido[i] + parimp[i]);
        if (i + 1 < n) printf(" ");
    }
}

int main() {

    int tunel[MAX], invertido[MAX], parimp[MAX], n = 0;

   
    while (scanf("%d", &tunel[n]) != EOF) 
    {
        n++;
    }

    printf("Invert: ");
    inverter(tunel, n, invertido);
    printf("\n");

    printf("ParImp: ");
    par_imp(tunel, n, parimp);
    printf("\n");

    printf("Soma: ");
    soma(invertido, parimp, n);
    printf("\n");

    return 0;
}
