#include <stdio.h>

int verifica(int mat[][100], int m, int n, int i, int j) {
    int alt = 0; 
    int larg = 0; 

    while (i + alt < m && j - larg >= 0 && j + larg < n) {
        for (int k = j - larg; k <= j + larg; k++) {
            if (mat[i + alt][k] != 1) {
                return alt * alt; 
            }
        }
        alt++;
        larg++;
    }
    return alt * alt;
}

int main() {
    int m, n;
    int mat[100][100]; 

    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int p = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                int x = verifica(mat, m, n, i, j);
                if (x > p) {
                    p = x;
                }
            }
        }
    }

    printf("%d\n", p);

    return 0;
}
