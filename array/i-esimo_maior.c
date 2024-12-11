#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b) 
{
    return *(int*)b - *(int*)a;
}

void ler(int v[], int n, int i) {
    if(i==n) return;
    scanf("%d", &v[i]);
    ler(v, n, i+1);
}

int i_enesimo(int v[], int i)
{
    return v[i];
}
int main() {

    int n, i, result;

    scanf("%d %d", &n, &i);

    int v[n];

    ler(v, n, 0);

    qsort(v, n, sizeof(int), compara);

    result = i_enesimo(v, i-1);

    printf("%d\n", result);

    return 0;
}