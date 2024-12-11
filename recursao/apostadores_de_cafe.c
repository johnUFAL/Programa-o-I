#include <stdio.h>
//n fiz 100% so

int eh_primo(int n, int divisor) {
    if (n <= 1) return 0;
    if (divisor * divisor > n) return 1;
    if (n % divisor == 0) return 0;
    return eh_primo(n, divisor + 1);
}

int eh_potencia_de_2(int n) {
    if (n == 1) return 1;
    if (n % 2 != 0 || n == 0) return 0;
    return eh_potencia_de_2(n / 2);
}

int batalha(int rodada, int ataque_ordep, int vida_ordep, int ataque_kcaj, int vida_kcaj) {
    
    if (vida_ordep <= 0) return 1; 
    if (vida_kcaj <= 0) return -1;

    if (!eh_potencia_de_2(rodada)) { 
        if (vida_ordep > ataque_ordep) {
            int temp = ataque_ordep;
            ataque_ordep = vida_ordep;
            vida_ordep = temp;
        }
        vida_kcaj -= ataque_ordep; 
    }

    if (!eh_primo(rodada, 2)) {
        if (vida_kcaj % 2 != 0) {
            ataque_kcaj += 5;
        }
        vida_ordep -= ataque_kcaj; 
    }

    return batalha(rodada + 1, ataque_ordep, vida_ordep, ataque_kcaj, vida_kcaj);
}

void processa_batalhas(int x, int vitorias_ordep, int vitorias_kcaj) {
    if (x == 0) {
        
        if (vitorias_ordep > vitorias_kcaj) {
            printf("ordep ganhou %d coffees\n", vitorias_ordep);
        } else if (vitorias_kcaj > vitorias_ordep) {
            printf("kcaj ganhou %d coffees\n", vitorias_kcaj);
        } else {
            printf("F coffees\n");
        }
        return;
    }

    int ataque_ordep, vida_ordep, ataque_kcaj, vida_kcaj;
    scanf("%d %d", &ataque_ordep, &vida_ordep);
    scanf("%d %d", &ataque_kcaj, &vida_kcaj);

    int resultado = batalha(1, ataque_ordep, vida_ordep, ataque_kcaj, vida_kcaj);
    if (resultado == 1) {
        vitorias_kcaj++;
    } else if (resultado == -1) {
        vitorias_ordep++;
    }
//ciclo
    processa_batalhas(x - 1, vitorias_ordep, vitorias_kcaj);
}

int main() {
    int x;
    scanf("%d", &x);

    processa_batalhas(x, 0, 0);

    return 0;
}

