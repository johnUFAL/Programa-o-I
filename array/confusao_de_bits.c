#include <stdio.h>

int maior_seq(int seq[], int i, int N, int agora, int maior)
{
    if(i == 0)
    {
        agora = 1;
        maior = 1;
    }
    else 
    {
        if(seq[i] != seq[i-1]) 
        {
            agora++;
        }
        else 
        {
            agora = 1;

        }

        if(agora > maior) 
        {
            maior = agora;
        }
    }
    
    if(i == N-1) return maior;

    return maior_seq(seq, i+1, N, agora, maior);
}

void ler(int seq[], int i, int N)
{
    if(i == N) return;
    scanf("%d", &seq[i]);
    ler(seq, i+1, N);
}

int processador(int atual, int N, int M)
{
    if(atual > N) return M;
    
    int tamB;
    scanf("%d", &tamB);

    int bits[20];
    ler(bits, 0, tamB);

    int maior = maior_seq(bits, 0, tamB, 0, 0);

    if(maior > M)
    {
        M = maior;
    }

    return processador(atual+1, N, M);
}

int main() {

    int N; 
    scanf("%d", &N);

    int result =processador(1, N, 0);

    printf("%d\n", result);

    return 0;
}