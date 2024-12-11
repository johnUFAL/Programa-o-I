#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_APOSTA 100
#define MAX_NUM 10

int acertos(int aposta[], int size, int result[])
{
    int ganhador = 0;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(aposta[i] == result[j])
            {
                ganhador++;
                break;
            }
        }
    }

    return ganhador;
}

int main() {

    int N;
    int numeros_da_sorte[6];
    int sorteado = 0;

    scanf("%d", &N);

    int apostas[MAX_APOSTA][MAX_NUM];
    int size_a[MAX_APOSTA];

    for (int i = 0; i < N; i++) 
    {
        char apostas_max[50];
        int size = 0;

        scanf(" %[^\n]", apostas_max);

        char *token = strtok(apostas_max, ",");

        while(token != NULL && size < MAX_NUM)
        {
            apostas[i][size++] = atoi(token);
            token = strtok(NULL, ",");
        }

        size_a[i] = size;
    }

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &numeros_da_sorte[i]);
    }

    for(int i = 0; i < N; i++)
    {
        if(acertos(apostas[i], size_a[i], numeros_da_sorte) == 6)
        {
            sorteado++;
        }
    }

    printf("Total de ganhadores: %d\n", sorteado);

    return 0;
}