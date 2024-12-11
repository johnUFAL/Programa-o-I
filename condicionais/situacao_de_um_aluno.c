#include <stdio.h>
#include <math.h>

int main() {

    int notaA, notaB, notaC; 
    float media;

    scanf("%d\n%d\n%d", &notaA, &notaB, &notaC);

    media = ((float)(notaA+notaB+notaC)/3); //transfomndo inteiro em float

    if (media >= 70)
    {
        printf("A media do aluno foi %.2f e ele foi APROVADO", media);
    }
    else if (media >= 0 && media <= 40)
    {
        printf("A media do aluno foi %.2f e ele foi REPROVADO", media);
    }
    else if (media > 40 && media < 70)
    {
        printf("A media do aluno foi %.2f e ele foi FINAL", media);
    }
    else
        printf("Media invalida");
    
    return 0;
}