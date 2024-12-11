#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void impressora (int arr[])
{
    int For, Des, Con, Sab, Int, Car;
    scanf("%d %d %d %d %d %d", &For, &Des, &Con, &Sab, &Int, &Car);
    printf("For = %d\n", arr[6 - For]);
    printf("Des = %d\n", arr[6 - Des]);
    printf("Con = %d\n", arr[6 - Con]);
    printf("Sab = %d\n", arr[6 - Sab]);
    printf("Int = %d\n", arr[6 - Int]);
    printf("Car = %d\n", arr[6 - Car]);
}

void bolha(int arr[], int cont, int size)
{
    if(cont == size - 1)   return;

    if(arr[cont] > arr[cont + 1])
    {
        int aux = arr[cont];
        arr[cont] = arr[cont + 1];
        arr[cont + 1] = aux;
    }
    bolha(arr, cont + 1, size);
}

void organizar(int arr[], int size)
{
    if(size == 1)
    {
        impressora(arr);
        return;
    }
    else
    {
        bolha(arr, 0, size);
        return organizar(arr, size - 1);
    }
}

int soma_num(int A, int B, int C, int D) 
{
    if(A < B && A < C && A < D)    return A;
    else if (B < D && B < C && B < A)    return B;
    else if(C < A && C < B && C < D)    return C;
    else    return D;
}

int rolagem(int cont, int somas[])
{
    if(cont == 6)
    {
        organizar(somas, 6);
        return 0;
    }
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D); 

    int soma = A + B + C + D;
    soma -= soma_num(A, B, C, D);
    somas[cont] = soma;


    return rolagem(cont + 1, somas);
}

int main()
{
    int somas[6] = {};
    
    rolagem(0, somas);
    
    return 0;
}