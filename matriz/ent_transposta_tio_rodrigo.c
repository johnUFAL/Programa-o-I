#include <stdio.h>

void inverte_diagonal(int n, int mat[n][n])
{
    for (int i = 0; i < n/2; i++)
    {
        int aux = mat[i][i];
        mat[i][i] = mat[n - i - 1][n - i - 1];
        mat[n - i - 1][n - i - 1] = aux;
    }
}

void multiplca(int n, int mat[n][n])
{   
    for (int i = 0; i < n; i++)
    {
        mat[i][n-1-i] *= 2;
    }
}

void transpor(int n, int mat[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
        
            int aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;
        }
    }
}

int main() {

    int n;
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    inverte_diagonal(n, mat);
    multiplca(n, mat);
    transpor(n, mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}