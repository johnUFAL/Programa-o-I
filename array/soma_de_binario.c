#include <stdio.h>

void impressora(int arr[], int i, int N) 
{
    if(i==N)
    {
        printf("\n");
        return;
    }

    printf("%d ", arr[i]);

    if(i<N-1) 
    {
        printf("");
    }
    impressora(arr, i+1, N); 
}

void soma_casos(int N, int arr1[], int arr2[], int res[], int i, int vaium)
{
    if(i<0)
    {
        if(vaium==1) 
        {
            printf("OVERFLOW\n");
        }
        else 
        {
            impressora(res, 0, N);
        }
        return;
    }

    int s = arr1[i] + arr2[i] + vaium;
    res[i] = s%2;
    vaium = s/2;

    soma_casos(N, arr1, arr2, res, i-1, vaium);
}

void soma(int N, int arr1[], int arr2[])
{
    int res[N];
    soma_casos(N, arr1, arr2, res, N-1, 0);
}
void ler(int arr[], int i, int N) {
    if (i < N) {
        scanf("%d", &arr[i]);
        ler(arr, i + 1, N);
    }
}
int main() { 

    int N;
    scanf("%d", &N);

    int arr1[N], arr2[N];

    ler(arr1, 0, N);
    ler(arr2, 0, N); 

    soma(N, arr1, arr2);

    return 0;
}