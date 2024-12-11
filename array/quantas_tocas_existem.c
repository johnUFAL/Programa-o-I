#include <stdio.h>

#define MAX 10000

void visitar(int i, int buracos[], 
    int visitas[], int cor)
{
    // j� visitado, encerra
    if (visitas[i] != 0) return;
    
    // pinta o buraco i
    visitas[i] = cor;
    
    // visita o buraco apontado por i
    visitar(buracos[i], buracos, visitas, cor);
}

int contar_tocas(int i, int buracos[], int tam, 
int cor,
int visitas[])
{
    if ( i == tam ) return cor - 1;

    if (visitas[i] == 0)
    {
        visitar(i, buracos, visitas, cor);
        cor++;
    }

    return contar_tocas(i + 1, buracos, tam, cor, visitas);
}

void ler(int i, int n, int a[])
{
    if (i == n) return;
    scanf("%d", &a[i]);

    ler(i + 1, n , a);
}

int main()
{
    int buracos[MAX];
    int visitas[MAX] = {0};
    int n;

    scanf("%d", &n);
    ler(0, n, buracos);

    printf("%d\n", contar_tocas(0, buracos, n, 1, visitas));
    return 0;
}