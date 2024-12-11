#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Coordenadas;

int posicao_legal(int x, int y, int N, int M, int mat[N][M]){
    return x >= 0 && x < N && y >= 0 && y < M && mat[x][y] == 1;
}

Coordenadas mais_proximo(int x, int y, int N, int M, int mat[N][M]) {
    int xx[] = {-1, 1, 0, 0};
    int yy[] = {0, 0, -1, 1};
    int visitou[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            visitou[i][j] = 0;
        }
    }

    Coordenadas fila[N*M];
    int cmc = 0, fim = 0;

    fila[fim++] = (Coordenadas) {x, y};
    visitou[x][y] = 1;

    while(cmc < fim){
        Coordenadas atual = fila[cmc++];
         
         if(mat[atual.x][atual.y] == 1){
            return atual;
         }

         for(int i = 0; i < 4; i++){
            int nx = atual.x + xx[i];
            int ny = atual.y + yy[i];
            if(nx >= 0 && nx < N && ny >= 0 && ny < M && !visitou[nx][ny]){
                visitou[nx][ny] = 1;
                fila[fim++] = (Coordenadas) {nx, ny};
            }
         }
    }
    return (Coordenadas) {x, y};
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    int n_direcao;
    scanf("%d", &n_direcao);

    char dire[n_direcao];
    for(int i = 0; i < n_direcao; i++){
        scanf(" %c", &dire[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    for(int i = 0; i < n_direcao; i++){
        int new_x = x, new_y = y;
        if(dire[i] == 'C'){
            new_x--;
        } else if(dire[i] == 'B'){
            new_x++;
        } else if(dire[i] == 'E'){
            new_y--;
        } else if(dire[i] == 'D'){
            new_y++;
        }

        if(posicao_legal(new_x, new_y, N, M, mat)){
            x = new_x;
            y = new_y;
        }
    }

    Coordenadas result = mais_proximo(x, y, N, M, mat);
    printf("(%d,%d)\n", result.x, result.y);

    return 0;
}