#include <stdio.h>

//funçao para trocar dois valores
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//QuickSort (partiçao)
int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j <= high; j++){
        if(arr[j] < pivot){ //Para fazer em ordem decrescente basta mudar para >
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//QuickSirt (ordenando)
void quickSort(int *arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);

    int mat[n][m];
    int total = n*m;
    int *arr = (int *)mat;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", *(mat + i) + j);
        }
    }

    quickSort(arr, 0, total - 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }

    return 0;
}