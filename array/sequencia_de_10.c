#include <stdio.h>

int comparar(int seq[], int tam, int ultimo, int i)
{
    if(i == tam) return 0;

    if (seq[i] == ultimo)
    {
        return 1 + comparar(seq, tam, ultimo, i + 1);
    }

    return comparar(seq, tam, ultimo, i+1);
}

void ler(int seq[], int i)
{
    if (i == 10) return;
    scanf("%d", &seq[i]);
    ler(seq, i + 1);
}

int main() {

    int seq[10];

    ler(seq, 0);

    int result;
    int ultimo = seq[9];

    result = comparar(seq, 10, ultimo, 0);

    printf("O numero %d apareceu %d vezes\n", ultimo, result);

    return 0;
}