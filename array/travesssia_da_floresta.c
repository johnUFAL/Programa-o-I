#include <stdio.h>

int valor_final(int dados[], int bonus[], int v_final[], int dificult, int i, int passou, int max_valor, int min_valor)
{
    if(i == 5) 
    {
        printf("Jogadores que passaram: %d\n", passou);
        printf("Maior valor: %d\n", max_valor);
        printf("Menor valor: %d\n", min_valor);
        return 0;
    }

    v_final[i] = (dados[i] + bonus[i]);

    if(v_final[i] >= dificult)
    {
        passou++;
    }

    if(i == 0 || v_final[i] > max_valor)
    {
        max_valor = v_final[i];
    }

    if(i == 0 ||v_final[i] < min_valor)
    {
        min_valor = v_final[i];
    }

    valor_final(dados, bonus, v_final, dificult, i+1, passou, max_valor, min_valor);
}

void ler_dados(int dodas[], int i)
{
    if(i == 5) return;
    scanf("%d", &dodas[i]);
    ler_dados(dodas, i+1);
}

void ler_bonus(int bonus[], int i)
{
    if(i == 5) return;
    scanf("%d", &bonus[i]);
    ler_bonus(bonus, i+1);
}

int main() {

    int dif_floresta;
    int dados[5], bonus[5], v_final[5];
    
    scanf("%d", &dif_floresta);

    ler_dados(dados, 0);
    ler_bonus(bonus, 0);

    valor_final(dados, bonus, v_final, dif_floresta, 0, 0, 0, 0);

    return 0;
}