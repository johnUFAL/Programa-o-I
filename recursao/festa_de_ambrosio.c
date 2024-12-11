#include <stdio.h>

int festa(int min, int max, int qtd_aumenta, int inicial, int Maxvalor)
{

    if (Maxvalor < min)
    {
        return 0;
    }

    int ingresso = inicial + (max - Maxvalor) * qtd_aumenta;
    int ingresso_lucro = ingresso*Maxvalor;

    int prox = festa(min, max, qtd_aumenta, inicial, Maxvalor-1);

    return ingresso_lucro > prox ? ingresso_lucro : prox;

}

int main() {

    int min, max, qtd_aumenta, inicial;

    scanf("%d %d %d %d", &min, &max, &qtd_aumenta, &inicial);

    int result = festa(min, max, qtd_aumenta, inicial, max);

    printf("%d", result);

    return 0;
}