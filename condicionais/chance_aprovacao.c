#include <stdio.h>
#include <math.h>

int main()
{
    int problema, resposta;
    double feita;

    scanf("%d %d", &problema, &resposta);

    feita = (((double)resposta*100)/problema);

    if (feita < 20)
    {
        printf("%.2lf%% 4.40%% Pessimo", feita);
    }
    else if (feita >= 20 && feita < 40)
    {
        printf("%.2lf%% 31.65%% Ruim", feita);
    }
    else if (feita >= 40 && feita < 60)
    {
        printf("%.2lf%% 56.82%% Bom", feita);
    }
    else if (feita >= 60 && feita < 80)
    {
        printf("%.2lf%% 80.00%% Muito Bom", feita);
    }
    else if (feita >= 80 && feita < 100)
    {
        printf("%.2lf%% 94.00%% Excelente", feita);
    }

    return 0;
    
}