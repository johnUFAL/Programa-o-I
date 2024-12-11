#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int maior = -1000000;
    int soma_d = 0;
    float soma = 0;
    int delta = 0;

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) 
            {
                maior = matriz[i][j];
            }

            if (i == j) 
            {
                soma_d += matriz[i][j];
            }

            soma += matriz[i][j];
        }
    }

    float m = soma / 9;

    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior < 0) 
    {
        delta = -1;
    }

    printf("%.2f %d %d %d\n", m, maior, delta, soma_d);

    return 0;
}