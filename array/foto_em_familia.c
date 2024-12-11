#include <stdio.h>

void troca(float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
}

void ordena_passo(float a[], int i, int n)
{
    if (i == n-1) return;

    if(a[i] > a[i+1])
    {
        troca(&a[i], &a[i+1]);
    }

    ordena_passo(a, i+1, n);
}

void ordenar(float a[], int n)
{
    if (n == 1) return;

    ordena_passo(a, 0, n);
    ordenar(a, n-1);
}

void ambro_ord(float a[], float res[])
{
    res[0] = a[0];
    res[1] = a[2];
    res[2] = a[3];
    res[3] = a[1];
}

void ler(float a[], int i)
{
    if (i == 4) return;
    scanf("%f", &a[i]);
    ler(a, i+1);
}

void imprimir(float res[], int i)
{
    if (i == 4) return;
    
    printf("%.2f\n", res[i]);
    imprimir(res, i+1);
}

int main()
{
    float a[4];
    float res[4];

    ler(a, 0);

    ordenar(a, 4);

    ambro_ord(a, res);
    
    imprimir(res, 0);
    
    return 0;
}