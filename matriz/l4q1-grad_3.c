#include <stdio.h>
#include <math.h>

#define LINHA 5
#define COLUNA 10

double distancia(int x, int y) 
{
    return sqrt(x * x + y * y);
}

int main() {

    char mapa[LINHA][COLUNA];
    int corder_x = -1, corder_y = -1;
    double tempo = -1;
    
    for (int i = 0; i < LINHA; i++) 
    {
        for (int j = 0; j < COLUNA; j++) 
        {
            scanf(" %c", &mapa[i][j]);
        }
    }
    
    for (int i = 0; i < LINHA; i++) 
    {
        for (int j = 0; j < COLUNA; j++) 
        {
            if (mapa[i][j] == '0' || mapa[i][j] == '1') 
            { 
                double dis = distancia(i, j);
                double time = dis * 20;
                
                if (mapa[i][j] == '0') 
                {
                    time += 40;
                }

                if (tempo == -1 || time < tempo || (time == tempo && i < corder_y)) 
                {
                    tempo = time;
                    corder_y = i;
                    corder_x = j;
                }
            }
        }
    }
    
    if (tempo == -1) 
    {
        printf("Tristemente voce vai ter que aturar os PCs do grad 4\n");
    } 
    else 
    {
        printf("Vai la pro computador %d da fileira %d\n", corder_x, corder_y);
    }

    return 0;
}
