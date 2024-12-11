#include <stdio.h>
#include <math.h>

int primo(int num){
    if(num <= 1) return 0; // 1 e menores n sao primos   
    if(num == 2) return 1; //dois é primo
    if(num % 2 == 0) return 0; //par n é primo 
    for(int i = 3; i <= sqrt(num); i += 2){
        if(num % i == 0) return 0; //divisao por outros numeros
    }
    return 1; //caso contrario é primo
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(primo(*(*(mat + i) + j))) {
                printf("%d ", *(*(mat + i) + j));
            } else {
                printf("* "); //caso quiser so os nm retire o else
            }
        }
        printf("\n");
    }

    return 0;
}