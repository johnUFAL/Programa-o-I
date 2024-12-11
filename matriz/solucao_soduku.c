#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

bool ve_linha(int soduku[SIZE][SIZE], int linha) 
{
    bool now[SIZE+1] = {false};

    for (int i = 0; i < SIZE; i++)
    {
        int n = soduku[linha][i];
        if(n < 1 || n > 9 || now[n])
        {
            return false;
        }

        now[n] = true;
    }

    return true;
}

bool ve_coluna(int soduku[SIZE][SIZE], int coluna) 
{
    bool now[SIZE+1] = {false};

    for (int i = 0; i < SIZE; i++)
    {
        int n = soduku[i][coluna];
        if(n < 1 || n > 9 || now[n])
        {
            return false;
        }

        now[n] = true;
    }

    return true;
}

bool ve_area(int soduku[SIZE][SIZE], int linhai, int colunai) 
{
    bool now[SIZE+1] = {false};

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int n = soduku[linhai+i][colunai+j];
            if(n < 1 || n > 9 || now[n])
            {
                return false;
            }

            now[n] = true;
        }
    }

    return true;
}

bool ve_tabuleiro(int soduku[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if(!ve_linha(soduku, i) || !ve_coluna(soduku, i))
        {
            return false;
        }
    }

    for(int i = 0; i < SIZE; i += 3)
    {
        for(int j = 0; j < SIZE; j += 3)
        {
            if(!ve_area(soduku, i, j))
            {
                return false;
            }
        }
    }
    return true;
}

int main() {

    int n;
    scanf("%d", &n);

    for(int instancia = 1; instancia <= n; instancia++)
    {
        int soduku[SIZE][SIZE];

        for(int i = 0; i < SIZE; i++)
        {
            for(int j = 0; j < SIZE; j++)
            {
                scanf("%d", &soduku[i][j]);
            }
        }

        bool result = ve_tabuleiro(soduku);

        printf("Instancia %d\n", instancia);

        if(result)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}