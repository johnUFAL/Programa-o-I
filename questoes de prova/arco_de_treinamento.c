#include <stdio.h>

void ler(int caminho[], int n, int i)
{
    if(i==n) return;
    scanf("%d", &caminho[i]);
    ler(caminho, n, i+1);
}

int band_amarela(int a[], int i, int cont, int n)
{
    if(i == n) return  cont;
    if (a[i] == 3) cont++;
    return band_amarela(a, i+1, cont, n);
}

int band_laranja(int a[], int i, int cont, int n)
{
    if(i == n) return  cont;
    if (a[i] == 2) cont++;
    return band_laranja(a, i+1, cont, n);
}

int band_vermelha(int a[], int i, int cont, int n)
{
    if(i == n) return  cont;
    if (a[i] == 1) cont++;
    return band_vermelha(a, i+1, cont, n);
}

void inverter(int arr[], int i, int n)
{
    if (n <= 0) return;

    if (arr[i] == arr[0])
    {
        int aux = arr[i];
        arr[i] = arr[0];
        arr[0] = aux;
    }
    inverter(arr, i+1, n-1);
    printf("%d ", arr[i]);
}

int main() {

    int n;
    scanf("%d", &n);
 
    int caminho[n];

    ler(caminho, n, 0);

    int amarelo = band_amarela(caminho, 0, 0, n);
    int laranja =  band_laranja(caminho, 0, 0, n);
    int vermelho =  band_vermelha(caminho, 0, 0, n);

    printf("Amarelo = %d\n", amarelo);
    printf("Laranja = %d\n", laranja);
    printf("Vermelho = %d\n", vermelho);

    inverter(caminho, 0, n); 

    return 0;
}

