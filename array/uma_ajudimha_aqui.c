#include <stdio.h>

#define max 10

void ler(float notaE[], int *contE, float notaC[], int *contC, int i) 
{
    if(i == max) return;

    char turma;
    float nota;

    scanf("%f %c", &nota, &turma);

    if(turma == 'e') 
    {
        notaE[*contE] = nota;
        (*contE)++;
    } 
    else if (turma == 'c') 
    {
        notaC[*contC] = nota;
        (*contC)++;
    }
    
    ler(notaE, contE, notaC, contC, i+1);
}

void descre(float nota[], int num)
{
    if(num == 1) return;
    int i = 0;
    void pass(float nota[], int i) 
    {
        if(i == num-1) return;
        if(nota[i] < nota[i+1])
        {
            float a = nota[i];
            nota[i] = nota[i+1];
            nota[i+1] = a;
        }
        pass(nota, i+1);
    }
    pass(nota, i);
    descre(nota, num-1);
}

void impressora(float nota[], int num)
{
    if(num == 0) return;

    for(int i = 0; i < num; i++)
    {
        printf("%.2f", nota[i]);
        if(i < num - 1) 
            printf(" ");
    }
}

int main() {

    float notaE[max], notaC[max];
    int contE = 0, contC = 0;

    ler(notaE, &contE, notaC, &contC, 0);

    descre(notaE, contE);
    descre(notaC, contC);

    printf("EC: ");
    impressora(notaE, contE);
    printf("\n");
    printf("CC: ");
    impressora(notaC, contC);
    printf("\n");

    return 0;
}
