#include <stdio.h>

#define QUESTOEs 10
#define ESTUDANTE 100

float calculadora(char gabarito[], char respostas[], int i) {
    if(i == QUESTOEs) return 0.0;

    if(gabarito[i] == respostas[i])  
        return 1.0 + calculadora(gabarito, respostas, i+1);

    return calculadora(gabarito, respostas, i+1);
}

int aprovados(float notas[], int i, int totalA) {
    if(i == totalA) return 0;

    if(notas[i] >= 6.0) 
        return 1 + aprovados(notas, i+1, totalA);

    return aprovados(notas, i+1, totalA);
}

void conta_notas(float notas[], int i, int totalA, int freq[]) {
    if(i == totalA) return;

    int NOTA = (int) notas[i]; 
    freq[NOTA]++;

    conta_notas(notas, i+1, totalA, freq);
}

int nota_mais_freq(int freq[], int i, int AtualN, int atualF) {
    if(i == 11) return AtualN;

    if(freq[i] > atualF) 
        return nota_mais_freq(freq, i+1, i, freq[i]);

    return nota_mais_freq(freq, i+1, AtualN, atualF);
}

int alunos(float notas[], int i) {
    if(notas[i] == -1.0) return i;

    return alunos(notas, i+1);  
}

void inicio_nota(float notas[], int i) {
    if(i == ESTUDANTE) return;
    notas[i] = -1.0;

    inicio_nota(notas, i+1);
}

void corretor(char gabarito[], float notas[], int totalA) {
    int numA;
    char resp[QUESTOEs + 1];

    scanf("%d", &numA);

    if(numA == 9999) return;

    scanf("%s", resp);

    float nota = calculadora(gabarito, resp, 0);
    notas[totalA] = nota;

    printf("%d %.1f\n", numA, nota);

    corretor(gabarito, notas, totalA + 1);
}

int main() {
    char gabarito[QUESTOEs + 1];
    float n[ESTUDANTE];
    int fre[11] = {0};

    inicio_nota(n, 0);

    scanf("%s", gabarito);

    corretor(gabarito, n, 0);

    int TOTAL_A = alunos(n, 0);

    int apro = aprovados(n, 0, TOTAL_A);

    float aprovacao_porc = ((float)apro * 100) / TOTAL_A;
    printf("%.1f%%\n", aprovacao_porc);

    conta_notas(n, 0, TOTAL_A, fre);

    int notaFre = nota_mais_freq(fre, 0, 0, fre[0]);
    printf("%d.0\n", notaFre);

    return 0;
}
