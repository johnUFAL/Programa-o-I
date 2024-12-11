#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //imprimir
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //coodernadas
    int x1, y1, x2, y2;
    printf("Coodernadas (x, y)(x1, y1): \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && x2 >= 0 && x2 < n && y2 >= 0 && y2 < m){
        int aux = mat[x1][y1]; //trocando
        mat[x1][y1] = mat[x2][y2];
        mat[x2][y2] = aux;

        printf("Nova matriz: \n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Coodernadas invalidas\n");
    }

    return 0;
}