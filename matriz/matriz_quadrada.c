#include <stdio.h>

void n_sei_que_nome_dar(int n)
{
    int mat[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int v = i < j ? i : j;
            v = v < n - i ? v : n - i - 1;
            v = v < n - j ? v : n - j - 1;

            mat[i][j] = v + 1;
        
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j > 0)
            {
                printf(" ");
            }

            printf("%d", mat[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}

int main() {

    int n;
    
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        n_sei_que_nome_dar(n);
    }

    return 0;
}