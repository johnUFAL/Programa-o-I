#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int mat[n][n];
    int arr[n * n];

    for (int i = 0; i < n * n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int topo = 0, baixo = n - 1, esquerda = 0, direita = n - 1;
    int x = 0;

    while(topo <= baixo && esquerda <= direita)
    {
        for(int i = topo; i <= baixo; i++)
        {
            mat[i][esquerda] = arr[x++];
        }
        esquerda++;

        for(int i = esquerda; i <= direita; i++)
        {
            mat[baixo][i] = arr[x++];
        }
        baixo--;

        if(esquerda <= direita)
        {
            for(int i = baixo; i >= topo; i--)
            {
                mat[i][direita] = arr[x++];
            }
            direita--;
        }

        if(topo <= baixo)
        {
            for(int i = direita; i >= esquerda; i--)
            {
                mat[topo][i] = arr[x++];
            }
            topo++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d", mat[i][j]);
            printf("\n");
        }
    }

    return 0;
}