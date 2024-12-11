#include <stdio.h>

#define TAM 10000

void imprimir(int a[], int i, int tam)
{
    if (i == tam)
    {
       printf("\n");
       return;
    }
     
    printf("%d ", a[i]);
    imprimir(a, i+1, tam);
}

void ler(int a[], int i, int tam)
{
    if (i == tam) return;
    scanf("%d", &a[i]);
    ler(a, i+1, tam);
}


void bolha(int a[], int i, int tam)
{
    if ( i == tam-1 ) return;

    if (a[i] > a[i+1])
    {
        int aux = a[i];
        a[i] = a[i+1];
        a[i+1] = aux;
    }
    bolha(a, i+1, tam);
}
void ordenar(int a[], int tam)
{
    if (tam == 1) return;

    bolha(a, 0, tam);
    ordenar(a, tam -1 );
}

double somar(int a[], int tam)
{
    if (tam == 1) return a[tam -1];
    return a[tam-1] + somar(a, tam -1);
}

double calcular_media(int a[], int tam)
{
    return somar(a, tam) / tam;
}

double calcular_mediana(int a[], int tam)
{
    int meio = tam / 2;

    if (tam % 2 == 0)
    {
        return (a[meio-1] + a[meio]) / 2.0;
    }
    else
    {
        return a[meio];
    }
}

// encontrar_moda(a, n, 0, 0, 0, 0, 0) 

int encontrar_moda(int a[], int tam, 
                int i, int atual, 
                int qtd_atual, int moda, 
                int qtd_moda)
{
    if (i == tam) return moda;

    if (a[i] == atual)
    {
        qtd_atual ++;
    }
    else
    {
        atual = a[i];
        qtd_atual = 1;
    }


    if (qtd_atual >= qtd_moda)
    {
        moda = atual;
        qtd_moda = qtd_atual;
    }

    encontrar_moda(a, tam, 
                i+1, atual, qtd_atual, moda, 
                qtd_moda);

}

int main()
{
    int a[TAM];
    int n, moda;
    double mediana, media;
    
    scanf("%d", &n);

    ler(a, 0, n);
    
    ordenar(a, n);
    
    media = calcular_media(a, n);
    mediana = calcular_mediana(a, n);
    moda = encontrar_moda(a, n, 0, 0, 0, 0, 0);

    printf("%.2lf %.2lf %.2lf\n", media, mediana, (double) moda);

    return 0;
}