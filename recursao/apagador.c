#include <stdio.h>

//nao fiz 100%

int maior_numero(int n) {

    int centenas = n / 100;
    int dezenas = (n / 10) % 10;
    int unidades = n % 10;

    int sem_centenas = dezenas * 10 + unidades;
    int sem_dezenas = centenas * 10 + unidades;
    int sem_unidades = centenas * 10 + dezenas;

    if (sem_centenas >= sem_dezenas && sem_centenas >= sem_unidades) {
        return sem_centenas;
    } else if (sem_dezenas >= sem_centenas && sem_dezenas >= sem_unidades) {
        return sem_dezenas;
    } else {
        return sem_unidades;
    }
}

void processa_casos(int t) {
    if (t == 0) return;

    int n;
    scanf("%d", &n);

    printf("%d\n", maior_numero(n));

    processa_casos(t - 1);
}

int main() {
    int t;
    scanf("%d", &t);

    processa_casos(t);

    return 0;
}
