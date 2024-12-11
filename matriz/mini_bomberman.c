#include <stdio.h>

#define MAIOR_N 100

void booom(char mapa[MAIOR_N][MAIOR_N], int n, int x, int y, int dx, int dy) //by inntegralkk
{
    int nx = x + dx;
    int ny = y + dy;

    if (nx < 0) 
    {
        nx = n - 1;
    } 
    else if (nx >= n) 
    {
        nx = 0;
    }

    if (ny < 0) 
    {
        ny = n - 1;
    } 
    else if (ny >= n) 
    {
        ny = 0;
    }

    if (mapa[nx][ny] == '&') 
    {
        mapa[nx][ny] = '_';
    } 
    else if (mapa[nx][ny] == '_') 
    {
        mapa[nx][ny] = '_';
    }
}

void bomba(char mapa[MAIOR_N][MAIOR_N], int n, int x, int y) 
{
    if (mapa[x][y] != '_') 
    {
        return;
    }

    mapa[x][y] = '_';

    booom(mapa, n, x, y, -1, 0);
    booom(mapa, n, x, y, 1, 0);
    booom(mapa, n, x, y, 0, -1);
    booom(mapa, n, x, y, 0, 1);
}

int main() {

    int n, m;
    char mapa[MAIOR_N][MAIOR_N];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%s", mapa[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) 
    {
        int x, y;
        scanf("%d %d", &x, &y);
        bomba(mapa, n, x, y);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", mapa[i]);
    }

    return 0;
}