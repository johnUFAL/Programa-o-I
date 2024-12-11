#include <stdio.h>

int main() {

    int p, e;
    scanf("%d %d", &p, &e);

    int votos[e][p];

    for (int i = 0; i < e; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            scanf("%d", &votos[i][j]);
        }
    }

    int contagem[p];

    for(int i = 0; i < p; i++)
    {
        contagem[i] = 0;
    }

    for(int i = 0; i < e; i++)
    {
        for(int j = 0; j < p; j++)
        {
            contagem[j] += votos[i][j];
        }
    }

    for(int i = 0; i < p; i++)
    {
        printf("Princesa %d: %d voto(s)\n", i+1, contagem[i]);
    }

    return 0;
}