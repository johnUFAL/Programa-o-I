#include <stdio.h>

void bloqueia(int mat[10][10], int x, int y) { //ondicoes de bloqueios
    int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

    for (int i = 0; i < 9; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        
        if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10) {
            mat[nx][ny] = 0;
        }
    }
}

int saida(int mat[10][10], int x, int y) { //condicoes de winner or loser
    if (x == 9 && y == 9) return 1;
    if (x >= 10 || y >= 10 || mat[x][y] == 0) return 0;

    mat[x][y] = 0;

    if (saida(mat, x + 1, y) || saida(mat, x, y + 1)) return 1;
    return 0;
}

int main() {
    int mat[10][10], lacra, x, y;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            scanf("%d", &mat[i][j]);// ler tabuleiro
        }
    } 

    scanf("%d", &lacra);//quantidade de lacaios 

    for (int i = 0; i < lacra; i++) {//coordenadas 
        scanf("%d %d", &x, &y);
        bloqueia(mat, x, y);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d", mat[i][j]);
            if (j < 9){
                printf(" ");
            } 
        }
        printf("\n");
    }
    printf(saida(mat, 0, 0) ? "SAIU\n" : "PRESO\n");
    return 0;
}