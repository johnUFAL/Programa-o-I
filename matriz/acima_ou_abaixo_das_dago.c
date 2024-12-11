#include <stdio.h>

int main() {

    char direcao[6];
    int limiar, n, soma = 0;

    scanf("%s", direcao);
    scanf("%d", &limiar);
    scanf("%d", &n);    

    int mat[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if(direcao[0] == 'a' && direcao[1] == 'c')
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                soma += mat[i][j];
            }
        }
    }
    else
    {
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                soma += mat[i][j];
            }
        }
    }

    if(soma > limiar)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return;
}