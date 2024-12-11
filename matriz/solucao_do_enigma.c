#include <stdio.h>

#define MAIOR_M 100
#define MAIOR_N 100

int main() {

    int n, m;
    int mat[MAIOR_N][MAIOR_M];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int cont = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int x = mat[i][j];
            int y = mat[i][j + 1];
            int z = mat[i + 1][j];
            int a = mat[i + 1][j + 1];

            int validade = 1;
            int cont_num[4] = {0};
            
            cont_num[x] += 1;
            cont_num[y] += 1;
            cont_num[z] += 1;
            cont_num[a] += 1;

            if (cont_num[0] == 1 && cont_num[1] == 1 && cont_num[2] == 1 && cont_num[3] == 1)
            {
                cont++;
            }
        }
    }

    printf("%d\n", cont);

    return 0;
}
