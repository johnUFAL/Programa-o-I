#include <stdio.h>
#include <stdbool.h>

bool contado(int n, int fig[], int prox)
{
    if(prox < 0) return false;
    if(fig[prox]==n) return true;
    return contado(n, fig, prox-1);
}

void processo_fig(int fig[], int n, int i, int joao, int maria, int soma_joao, int soma_maria)
{
    if(i==n)
    {
        printf("%d\n%d\n%d\n", joao, maria, (soma_joao > soma_maria) ? soma_joao : soma_maria);
        return;
    }

    int s = fig[i];

    if (s%2==0)
    {
        joao ++;
    }
    else
    {
        maria ++;
    }

    if(!contado(s, fig, i-1))
    {
        if(s%2==0)
        {
            soma_joao += s;
        }
        else
        {
            soma_maria += s;
        }
    }
    processo_fig(fig, n, i+1, joao, maria, soma_joao, soma_maria);
}

void ler(int *fig, int i, int n)
{
    if(i==n) return;
    scanf("%d", &fig[i]);
    ler(fig, i+1, n);
}

int main() {

    int n;

    scanf("%d", &n);

    int fig[n];

    ler(fig, 0, n);

    processo_fig(fig, n, 0, 0, 0, 0, 0);

    return 0;
}