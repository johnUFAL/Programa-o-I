#include <stdio.h>

#define alunos 10

void troca(int a[], int i, int k)
{
    int aux = a[i];
    a[i] = a[k];
    a[k] = aux;
}

void cresce(int a[], int i, int n)
{
    if(i==n-1) return;
    if(a[i] > a[i+1])
    {
        troca(a, i, i+1);
    }
    cresce(a, i+1, n);
}

void ordeCres(int a[], int n)
{
    if(n==1) return;
    cresce(a, 0, n);
    ordeCres(a, n-1);
}

void decrese(int a[], int i, int n)
{
    if(i==n-1) return;
    if(a[i] < a[i+1])
    {
        troca(a, i, i+1);
    }
    decrese(a, i+1, n);
}

void ordrDecre(int a[], int n)
{
    if(n==1) return;
    decrese(a, 0, n);
    ordrDecre(a, n-1);
}

void impressora(int a[], int n)
{
    if(n==0) return;
    printf("%d", a[0]);
    if(n > 1) printf(" ");
    impressora(a+1, n-1);
}
void ler(int v[], int i) {

    if(i==alunos) return;    
    scanf("%d", &v[i]);
    ler(v, i+1);
}

void processador(int turma_now, int N) 
{
    if(turma_now > N) return;
    int notas[alunos];
    ler(notas, 0);

    printf("turma %d:\n", turma_now);
    ordeCres(notas, alunos);
    impressora(notas, alunos);
    printf("\n");

    ordrDecre(notas, alunos);
    impressora(notas, alunos);
    printf("\n");

    processador(turma_now+1, N);
}
int main() {

    int n;
    scanf("%d", &n);

    processador(1, n);

    return 0;
}