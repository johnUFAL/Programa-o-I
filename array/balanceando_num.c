#include <stdio.h>

void ler(int arr[], int i, int T)
{
    if(i==T) return;
    scanf("%d", &arr[i]);
    ler(arr, i+1, T);
}

int verificador(int A, int F, int T, int arr[], int i, int balanca)
{
    if(balanca<0) return 0;
    if(i==T) return balanca == 0;

    if(arr[i] == A)
    {
        return verificador(A, F, T, arr, i+1, balanca+1);
    }
    else if (arr[i] == F)
    {
        return verificador(A, F, T, arr, i+1, balanca-1);
    }

    return 0;
}

int main() {

    int A, F, T;

    scanf("%d %d %d", &A, &F, &T);

    int arr[T];

    ler(arr, 0, T);

    if(verificador(A, F, T, arr, 0, 0))
    {
        printf("Balanceada!\n");
    }
    else 
    {
        printf("Desbalanceada!\n");
    }

    return 0;
}