#include <stdio.h>

int main() {

    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int maior_seq_total = 0;

    for(int i = 0; i < N; i++)
    {
        int maior_seq_l = 1;
        int seq_agr = 1;

        for(int j = 1; j < M; j++)
        {
            if(mat[i][j] >= mat[i][j-1])
            {
                seq_agr++;
            }
            else
            {
                if(seq_agr > maior_seq_l)
                {
                    maior_seq_l = seq_agr;
                }

                seq_agr = 1;
            }
        }

        if(seq_agr > maior_seq_l)
        {
            maior_seq_l = seq_agr;
        }

        printf("Linha %d: %d\n", i, maior_seq_l);

        if(maior_seq_l > maior_seq_total)
        {
            maior_seq_total = maior_seq_l;
        }

    }

    printf("Maior Sequencia: %d\n", maior_seq_total);

    return 0;
}