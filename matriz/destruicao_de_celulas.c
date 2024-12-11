#include <stdio.h>

int main() {

    int L, C, D;
    int mat[1000][1000];
    int resto = 0;
    int vivas = 0;

    scanf("%d %d", &L, &C);

    for(int i = 0; i < L; i++) 
    {
        for(int j = 0; j < C; j++) 
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 1)
            {
                vivas++;
            }
        }
    }

    scanf("%d", &D);

    int destruir;

    if(vivas < D)
    {
        destruir = vivas;
    }
    else
    {
        destruir = D;
    }

    resto = D - destruir;

    if(L % 2 == 0)
    {
        for(int i = 0; i < L && destruir > 0; i++)
        {
            for(int j = 0; j < C && destruir > 0; j++)
            {
                if(mat[i][j] == 1)
                {
                    mat[i][j] = 0;
                    destruir--;
                }

            }
        }
    }

else
{
    for(int j = 0; j < C && destruir > 0; j++)
    {
        for(int i = 0; i < L && destruir > 0; i++)
        {
            if(mat[i][j] == 1)
            {
                mat[i][j] = 0;
                destruir--;
            } 
        }
    }
}

    vivas = 0;

    for(int i = 0; i < L; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(mat[i][j] == 1)
            {
                vivas++;
            }
        }
    }

    for(int i = 0; i < L; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(j > 0)
            {
                printf(" ");
            }

            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("%d %d", resto, vivas);

    return 0;
}