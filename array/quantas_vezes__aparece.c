#include <stdio.h>

void ler(int a[], int i)
{
    if(i==10) return;
    scanf("%d", &a[i]);
    ler(a, i+1);
}

int busca(int a[], int i, int x, int cont)
{
    if(i == 10) return  cont;
    if (a[i]== x) cont++;
    return busca(a, i+1, x, cont);
}

int main() {

    int a[10];
    int x, result;

    ler(a, 0);

    scanf("%d", &x);
    
    result = busca(a, 0, x, 0);

    printf("%d\n", result);

    return 0;
}