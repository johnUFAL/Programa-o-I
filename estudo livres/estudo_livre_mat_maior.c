#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int *ptr = &mat[0][0];
    int max = *ptr, min = *ptr;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (*(ptr + i * m + j) > max) max = *(ptr + i * m + j);
            if (*(ptr + i * m + j) < min) min = *(ptr + i * m + j);
        }
    }

    printf("Maior elemento: %d\n", max);
    printf("Menor elemento: %d\n", min);

    return 0;
}

/*#include <stdio.h> para preencher a matriz

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    int value;
    scanf("%d", &value); // valor a ser preenchido

    int *ptr = &mat[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(ptr + i * m + j) = value;
        }
    }

    // Exibir a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

