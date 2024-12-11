#include <stdio.h>
#include <stdbool.h>

//n fiz 100%

#define MAX 100

int labirinto[MAX][MAX];
int n;

bool dentro_do_labirinto(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool dragoa_sente_cheiro(int x, int y) {
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx;
            int ny = y + dy;
            if (dentro_do_labirinto(nx, ny) && labirinto[nx][ny] == 2) {
                return true;
            }
        }
    }
    return false;
}

bool dfs(int x, int y, bool visitado[MAX][MAX]) {
    if (x == n - 1 && y == n - 1) return true;
    visitado[x][y] = true;

    int movimentos[2][2] = {{1, 0}, {0, 1}};
    for (int i = 0; i < 2; i++) {
        int nx = x + movimentos[i][0];
        int ny = y + movimentos[i][1];
        if (dentro_do_labirinto(nx, ny) && labirinto[nx][ny] == 1 && !visitado[nx][ny] && !dragoa_sente_cheiro(nx, ny)) {
            if (dfs(nx, ny, visitado)) return true;
        }
    }
    return false;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &labirinto[i][j]);
        }
    }

    if (labirinto[0][0] != 1 || labirinto[n - 1][n - 1] != 1 || dragoa_sente_cheiro(0, 0)) {
        printf("Ekul tomou o nhac da dragoa :(\n");
        return 0;
    }

    bool visitado[MAX][MAX] = {{false}};
    if (dfs(0, 0, visitado)) {
        printf("Ekul conseguiu ludibriar a dragoa!\n");
    } else {
        printf("Ekul tomou o nhac da dragoa :(\n");
    }

    return 0;
}
